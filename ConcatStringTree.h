#ifndef __CONCAT_STRING_TREE_H__
#define __CONCAT_STRING_TREE_H__

#include "main.h"

class LitStringHash;
class ConcatStringTree;

static int NodeID = 1;

struct StringNode
{
    string str;
    StringNode(string _str)
    {
        str = _str;
    }
};

class TreeNode {
public:
    class ParentTree;

    int leftLength;
    int length;
    StringNode* data;
    TreeNode* left;
    TreeNode* right;
    int id;
    ParentTree* parent;
    LitStringHash* hash;

    TreeNode()
    {
        leftLength = 0;
        length = 0;
        data = nullptr;
        left = nullptr;
        right = nullptr;
        if (NodeID > 1e7) throw overflow_error("Id is overflow!");
        id = NodeID;
        NodeID++;
        parent = new ParentTree();
        hash = nullptr;
    }
    TreeNode(string _data)
    {
        leftLength = 0;
        length = _data.length();
        data = new StringNode(_data);
        left = nullptr;
        right = nullptr;
        if (NodeID > 1e7) throw overflow_error("Id is overflow!");
        id = NodeID;
        NodeID++;
        parent = new ParentTree();
        hash = nullptr;
    }

    ~TreeNode()
    {
        leftLength = 0;
        length = 0;
        delete data;
        data = nullptr;
        left = nullptr;
        right = nullptr;
        id = 0;
        delete parent;
        parent = nullptr;
        hash = nullptr;
    }

    void addParent(int _id)
    {
        parent->insert(_id);
        if (left != nullptr) left->parent->insert(_id);
        if (right != nullptr) right->parent->insert(_id);
    }

    void delParent(int _id)
    {
        parent->remove(_id);
        if (parent->size() == 0)
        {
            if (left != nullptr) left->delParent(this->id);
            if (right != nullptr) right->delParent(this->id);
            terminate();
        }
    }

    void terminate()
    {
        delete this;
    }

    class ParentTree
    {
    protected:
        struct ParentNode {
            int id;
            ParentNode* left;
            ParentNode* right;
            int height;
            ParentNode()
            {
                id = -1;
                left = nullptr;
                right = nullptr;
                height = 0;
            }
            ParentNode(int _id)
            {
                id = _id;
                left = nullptr;
                right = nullptr;
                height = 0;
            }
        };

        ParentNode* root;
        int nodes;

        // Calculate height
        int height(ParentNode* p)
        {
            return (p == nullptr) ? 0 : p->height;
        }

        // New node creation
        ParentNode* newNode(int _id)
        {
            ParentNode* pRet = new ParentNode(_id);
            pRet->height = 1;
            return pRet;
        }

        // Rotate right
        ParentNode* rightRotate(ParentNode* y) {
            ParentNode* x = y->left;
            ParentNode* T2 = x->right;
            x->right = y;
            y->left = T2;
            y->height = max(height(y->left), height(y->right)) + 1;
            x->height = max(height(x->left), height(x->right)) + 1;
            return x;
        }

        // Rotate left
        ParentNode* leftRotate(ParentNode* x) {
            ParentNode* y = x->right;
            ParentNode* T2 = y->left;
            y->left = x;
            x->right = T2;
            x->height = max(height(x->left), height(x->right)) + 1;
            y->height = max(height(y->left), height(y->right)) + 1;
            return y;
        }

        // Get the balance factor of each node
        int getBF(ParentNode* p)
        {
            return (p == nullptr) ? 0 : (height(p->left) - height(p->right));
        }

        // Insert a node
        ParentNode* insertNode(ParentNode* root, int id) {
            // Find the correct postion and insert the node
            if (root == nullptr) return (newNode(id));
            if (id < root->id)
            {
                root->left = insertNode(root->left, id);
            }
            else if (id > root->id)
            {
                root->right = insertNode(root->right, id);
            }
            else return root;



            // Update the balance factor of each node and
            // balance the tree
            root->height = 1 + max(height(root->left), height(root->right));
            int bf = getBF(root);
            if (bf > 1) {
                if (id < root->left->id) return rightRotate(root);
                else if (id > root->left->id)
                {
                    root->left = leftRotate(root->left);
                    return rightRotate(root);
                }
            }
            if (bf < -1) {
                if (id > root->right->id) return leftRotate(root);
                else if (id < root->right->id)
                {
                    root->right = rightRotate(root->right);
                    return leftRotate(root);
                }
            }
            return root;
        }

        ParentNode* getLeftTree(ParentNode* root)
        {
            ParentNode* cur = root;
            while (cur->right != nullptr) cur = cur->right;
            return cur;
        }

        // Delete a node
        ParentNode* deleteNode(ParentNode* root, int id) {
            // Find the node and delete it
            if (root == nullptr) return root;
            if (id < root->id) root->left = deleteNode(root->left, id);
            else if (id > root->id) root->right = deleteNode(root->right, id);
            else
            {
                if ((root->left == nullptr) || (root->right == nullptr))
                {
                    ParentNode* tmp = (root->left != nullptr) ? root->left : root->right;
                    if (tmp == nullptr)
                    {
                        tmp = root;
                        root = nullptr;
                    }
                    else *root = *tmp;
                    delete tmp;
                }
                else
                {
                    ParentNode* tmp = getLeftTree(root->left);
                    root->id = tmp->id;
                    root->left = deleteNode(root->left, tmp->id);
                }
            }

            if (root == nullptr) return root;

            // Update the balance factor of each node and
            // balance the tree
            root->height = 1 + max(height(root->left), height(root->right));
            int bf = getBF(root);
            if (bf > 1)
            {
                if (getBF(root->left) >= 0) {
                    return rightRotate(root);
                }
                else {
                    root->left = leftRotate(root->left);
                    return rightRotate(root);
                }
            }
            if (bf < -1)
            {
                if (getBF(root->right) <= 0) {
                    return leftRotate(root);
                }
                else {
                    root->right = rightRotate(root->right);
                    return leftRotate(root);
                }
            }
            return root;
        }

        string PreOrderString(ParentNode* p) const
        {
            if (p == nullptr) return "";
            string ret = "(id=" + to_string(p->id) + ")";
            if (p->left != nullptr)
            {
                ret += (";" + PreOrderString(p->left));
            }
            if (p->right != nullptr)
            {
                ret += (";" + PreOrderString(p->right));
            }
            return ret;
        }

    public:
        ParentTree()
        {
            root = nullptr;
            nodes = 0;
        }

        int size()
        {
            return nodes;
        }

        void insert(int id)
        {
            root = insertNode(root, id);
            nodes++;
        }

        void remove(int id)
        {
            root = deleteNode(root, id);
            nodes = max(0, nodes - 1);
        }

        string toStringPreOrder() const
        {
            string ret = "ParentsTree[" + PreOrderString(root) + "]";
            return ret;
        }
    };
};


class ConcatStringTree {

protected:
    TreeNode* root;
    int len;

    int indexOfF(TreeNode* p, char c)
    {
        if(p == nullptr) return -1;
        if(p->data != nullptr)
        {
            int idx = p->data->str.find(c);
            return (idx == string::npos)? -1 : idx;
        }
        int idx = indexOfF(p->left, c);
        if(idx == -1)
        {
            idx = indexOfF(p->right, c);
            if(idx != -1) idx += p->leftLength;
        }
        return idx;
    }

    string PreOrderStringF(TreeNode* p) const
    {
        if(p->data != nullptr)
        {
            string ret = "(LL=0,L=" + to_string(p->length) + ",\"" + p->data->str + "\")";
            return ret;
        }
        string ret = "(LL=" + to_string(p->leftLength) + ",L=" + to_string(p->length) + ",<NULL>)";
        if(p->left != nullptr)
        {
            ret += (";" + PreOrderStringF(p->left));
        }
        if(p->right != nullptr)
        {
            ret += (";" + PreOrderStringF(p->right));
        }
        return ret;
    }

    string toString(TreeNode* p) const
    {
        if (p == nullptr) return "";
        if(p->data != nullptr) return p->data->str;
        string ret = ((p->left != nullptr)? toString(p->left) : "") + ((p->right != nullptr) ? toString(p->right) : "");
        return ret;
    }

    string reverse(string str) const
    {
        string ret = "";
        int l = str.length();
        for (int i = l - 1; i >= 0; i--) ret += str[i];
        return ret;
    }

    TreeNode* reverseNodeF(TreeNode* root) const
    {
        if (root == nullptr) return nullptr;
        if (root->data != nullptr)
        {
            string ret = reverse(root->data->str);
            TreeNode* p = new TreeNode(ret);
            return p;
        }
        TreeNode* p = new TreeNode();
        p->left = reverseNodeF(root->right);
        p->right = reverseNodeF(root->left);
        int LLen = (p->left == nullptr) ? 0 : p->left->length;
        int RLen = (p->right == nullptr) ? 0 : p->right->length;
        p->leftLength = LLen;
        p->length = LLen + RLen;
        return p;
    }

    TreeNode* subStringF(TreeNode* root, int from, int to) const
    {
        if (root == nullptr) return nullptr;
        if (root->data != nullptr)
        {
            string ret = root->data->str.substr(from, to - from);
            TreeNode* pRet = new TreeNode(ret);
            return pRet;
        }
        TreeNode* pRet = new TreeNode();
        if (from >= root->leftLength)
        {
            pRet->right = subStringF(root->right, from - root->leftLength, to - root->leftLength);
        }
        else if (to <= root->leftLength)
        {
            pRet->left = subStringF(root->left, from, to);
        }
        else
        {
            pRet->left = subStringF(root->left, from, root->leftLength);
            pRet->right = subStringF(root->right, 0, to - root->leftLength);
        }
        int LLen = (pRet->left == nullptr) ? 0 : pRet->left->length;
        int RLen = (pRet->right == nullptr) ? 0 : pRet->right->length;
        pRet->leftLength = LLen;
        pRet->length = LLen + RLen;
        return pRet;
    }

public:
    ConcatStringTree()
    {
        root = nullptr;
        len = 0;
    }
    ConcatStringTree(const char * s)
    {
        string tmp = "";
        for (int i = 0; s[i] != '\0'; i++)
        {
            tmp += s[i];
        }
        root = new TreeNode(tmp);
        len = root->length;
        root->addParent(root->id);
    }
    ConcatStringTree(TreeNode* p)
    {
        root = p;
        len = root->length;
        root->addParent(root->id);
    }
    ~ConcatStringTree()
    {
        len = 0;
        if(root != nullptr) root->delParent(root->id);
        root = nullptr;
    }
    int length() const
    {
        return len;
    }
    char get(int index)
    {
        if(index < 0 || index >= len) throw out_of_range("Index of string is invalid!");
        TreeNode* cur = root;
        while(cur->data == nullptr)
        {
            if(index < cur->leftLength)
            {
                cur = cur->left;
            }
            else
            {
                index -= cur->leftLength;
                cur = cur->right;
            }
        }
        return cur->data->str[index];
    }
    int indexOf(char c)
    {
        return indexOfF(root,c);
    }
    string toStringPreOrder() const
    {
        string ret = "ConcatStringTree[" + PreOrderStringF(root) + "]";
        return ret;
    }
    string toString() const
    {
        string ret = "ConcatStringTree[\"" + toString(root) + "\"]";
        return ret;
    }
    ConcatStringTree concat(const ConcatStringTree & otherS) const
    {
        TreeNode* newNode = new TreeNode();
        newNode->leftLength = len;
        newNode->length = len + otherS.len;
        newNode->left = root;
        newNode->right = otherS.root;
        return ConcatStringTree(newNode);
    }
    ConcatStringTree subString(int from, int to) const
    {
        if (from < 0 || from >= len || to < 0 || to > len) throw out_of_range("Index of string is invalid");
        if (from >= to) throw logic_error("Invalid range");
        TreeNode* newRoot = subStringF(root, from, to);
        return ConcatStringTree(newRoot);
    }
    ConcatStringTree reverse() const
    {
        TreeNode* newRoot = reverseNodeF(root);
        return ConcatStringTree(newRoot);
    }

    int getParTreeSize(const string& query) const
    {
        TreeNode* cur = root;
        if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
        for (auto c : query) if (c != 'l' && c != 'r') throw runtime_error("Invalid character of query");
        for (auto c : query)
        {
            if (c == 'l')
            {
                cur = cur->left;
                if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
            }
            else if (c == 'r')
            {
                cur = cur->right;
                if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
            }
            else throw runtime_error("Invalid character of query");
        }
        return cur->parent->size();
    }
    string getParTreeStringPreOrder(const string& query) const
    {
        TreeNode* cur = root;
        if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
        for (auto c : query) if(c != 'l' && c != 'r') throw runtime_error("Invalid character of query");
        for (auto c : query)
        {
            if (c == 'l')
            {
                cur = cur->left;
                if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
            }
            else if (c == 'r')
            {
                cur = cur->right;
                if (cur == nullptr) throw runtime_error("Invalid query: reaching NULL");
            }
            else throw runtime_error("Invalid character of query");
        }
        return cur->parent->toStringPreOrder();
    }
};

class ReducedConcatStringTree; // forward declaration

class HashConfig {
protected:
    int p;
    double c1, c2;
    double lambda;
    double alpha;
    int initSize;

    friend class ReducedConcatStringTree;
    friend class LitStringHash;

public:
    HashConfig(int _p, double _c1, double _c2, double _lambda, double _alpha, int _initSize)
    {
        p = _p;
        c1 = _c1;
        c2 = _c2;
        lambda = _lambda;
        alpha = _alpha;
        initSize = _initSize;
    }
};

class LitStringHash {

public:
    struct LitString
    {
        TreeNode* node;
        int num;

        LitString()
        {
            node = nullptr;
            num = 0;
        }
    };

protected:
    int p, size, curSize, lastIdx;
    double c1, c2, lambda, alpha;
    LitString* HashMap;

public:
    LitStringHash(const HashConfig& hashConfig)
    {
        p = hashConfig.p;
        size = hashConfig.initSize;
        curSize = 0;
        c1 = hashConfig.c1;
        c2 = hashConfig.c2;
        lambda = hashConfig.lambda;
        alpha = hashConfig.alpha;
        lastIdx = -1;
        HashMap = nullptr;
    }
    ~LitStringHash()
    {
        p = 0;
        size = 0;
        curSize = 0;
        c1 = 0;
        c2 = 0;
        lambda = 0;
        alpha = 0;
        lastIdx = 0;
        HashDelete();
    }

    void HashInit()
    {
        HashMap = new LitString[size];
    }
    void HashDelete()
    {
        delete[] HashMap;
        HashMap = nullptr;
    }
    int hp(int idx, int i)
    {
        int newIdx = idx + c1 * i;
        newIdx %= size;
        newIdx += c2 * pow(i, 2);
        newIdx %= size;
        return newIdx;
    }
    int hashFunction(string s)
    {
        int idx = 0;
        for (int i = 0; i < s.length(); i++)
        {
            idx += s[i] * pow(p, i);
            idx %= size;
        }
        return idx;
    }
    TreeNode* addNode(string s, int idx)
    {
        if (HashMap == nullptr) return nullptr;
        for (int i = 0; i < size; i++)
        {
            int newIdx = hp(idx, i);
            if (HashMap[newIdx].node == nullptr) continue;
            else if (HashMap[newIdx].node->data->str == s)
            {
                HashMap[newIdx].num++;
                return HashMap[newIdx].node;
            }
        }
        return nullptr;
    }
    void insert(TreeNode* _node, int idx)
    {
        if (HashMap == nullptr) HashInit();
        idx = probing(idx);
        HashMap[idx].node = _node;
        HashMap[idx].num = 1;
        lastIdx = idx;
        curSize++;
        if ((double)(curSize * 1.0 / size * 1.0) > lambda) rehash();
    }
    int probing(int idx)
    {
        for (int i = 0; i < size; i++)
        {
            int newIdx = hp(idx, i);
            if (HashMap[newIdx].node == nullptr) return newIdx;
        }
        throw runtime_error("No possible slot");
    }
    void rehash()
    {
        int newSize = size * alpha;
        int tmp = size;
        size = newSize;
        LitString* NewHashMap = new LitString[newSize];
        for (int i = 0; i < tmp; i++)
        {
            if (HashMap[i].node == nullptr) continue;
            int idx = hashFunction(HashMap[i].node->data->str);
            bool found = 0;
            for (int j = 0; j < size; j++)
            {
                int newIdx = hp(idx, j);
                if (HashMap[newIdx].node == nullptr)
                {
                    idx = newIdx;
                    found = 1;
                    break;
                }
            }
            if(!found) throw runtime_error("No possible slot");
            NewHashMap[idx] = HashMap[i];
            lastIdx = idx;
        }
        HashDelete();
        HashMap = NewHashMap;
    }
    int delNode(string s)
    {
        if (HashMap == nullptr) return -1;
        int idx = hashFunction(s);
        int newIdx = idx;
        int ret = -1;
        for (int i = 0; i < size; i++)
        {
            newIdx = idx + c1 * i;
            newIdx %= size;
            newIdx += c2 * pow(i, 2);
            newIdx %= size;
            if (HashMap[newIdx].node == nullptr) continue;
            else if (HashMap[newIdx].node->data->str == s)
            {
                HashMap[newIdx].num--;
                if (HashMap[newIdx].num == 0)
                {
                    HashMap[newIdx].node = nullptr;
                    curSize--;
                }
                ret = HashMap[newIdx].num;
                break;
            }
        }
        if(curSize == 0) HashDelete();
        return ret;
    }
    int getLastInsertedIndex() const
    {
        return lastIdx;
    }
    string toString() const
    {
        string ret = "LitStringHash[";
        if (HashMap != nullptr)
        {
            for (int i = 0; i < size; i++)
            {
                ret += "(" + ((HashMap[i].node != nullptr) ? ("litS=\"" + HashMap[i].node->data->str + "\"") : "") + ")" + ((i == size - 1) ? "" : ";");
            }
        }
        ret += "]";
        return ret;
    }
};

class ReducedConcatStringTree : public ConcatStringTree {

protected:
    LitStringHash* litStringHash;

public:

    ReducedConcatStringTree(const char* s, LitStringHash* litStringHash)
    {
        this->litStringHash = litStringHash;
        string tmp = "";
        for (int i = 0; s[i] != '\0'; i++)
        {
            tmp += s[i];
        }
        int idx = litStringHash->hashFunction(tmp);
        root = litStringHash->addNode(tmp, idx);
        if (root == nullptr)
        {
            root = new TreeNode(tmp);
            litStringHash->insert(root, idx);
            root->addParent(root->id);
        }
        len = root->length;
    }
    ReducedConcatStringTree(TreeNode* p)
    {
        root = p;
        len = root->length;
        root->addParent(root->id);
    }

    ~ReducedConcatStringTree()
    {
        len = 0;
        if (root != nullptr)
        {
            if (root->data == nullptr || litStringHash->delNode(root->data->str) <= 0)
            {
                root->delParent(root->id);
            }
        }
        root = nullptr;
    }

    ReducedConcatStringTree concat(const ReducedConcatStringTree& otherS) const
    {
        TreeNode* newNode = new TreeNode();
        newNode->leftLength = len;
        newNode->length = len + otherS.len;
        newNode->left = root;
        newNode->right = otherS.root;
        return ReducedConcatStringTree(newNode);
    }
    ReducedConcatStringTree subString(int from, int to) const
    {
        if (from < 0 || from >= len || to < 0 || to > len) throw out_of_range("Index of string is invalid");
        if (from >= to) throw logic_error("Invalid range");
        TreeNode* newRoot = subStringF(root, from, to);
        return ReducedConcatStringTree(newRoot);
    }
    ReducedConcatStringTree reverse() const
    {
        TreeNode* newRoot = reverseNodeF(root);
        return ReducedConcatStringTree(newRoot);
    }
};

#endif // __CONCAT_STRING_TREE_H__