#include "ConcatStringTree.h"

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define _BLOCK_TYPE(block)          (block & 0xFFFF)
#define _BLOCK_SUBTYPE(block)       (block >> 16 & 0xFFFF)
#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif


void test()
{
    ConcatStringTree* s0 = new ConcatStringTree("0123456789");
    ConcatStringTree* s1 = new ConcatStringTree("0123456789");
    ConcatStringTree* s2 = new ConcatStringTree("0123456789");
    ConcatStringTree* s3 = new ConcatStringTree("0123456789");
    ConcatStringTree* s4 = new ConcatStringTree("0123456789");
    ConcatStringTree* s5 = new ConcatStringTree("0123456789");
    ConcatStringTree* s6 = new ConcatStringTree("0123456789");
    ConcatStringTree* s7 = new ConcatStringTree("0123456789");

    ConcatStringTree* s8 = new ConcatStringTree(s0->concat(*s1));
    ConcatStringTree* s9 = new ConcatStringTree(s1->concat(*s2));
    ConcatStringTree* s10 = new ConcatStringTree(s2->concat(*s3));
    ConcatStringTree* s11 = new ConcatStringTree(s3->concat(*s4));
    ConcatStringTree* s12 = new ConcatStringTree(s4->concat(*s5));
    ConcatStringTree* s13 = new ConcatStringTree(s5->concat(*s6));
    ConcatStringTree* s14 = new ConcatStringTree(s6->concat(*s7));

    ConcatStringTree* s15 = new ConcatStringTree(s8->concat(*s9));
    ConcatStringTree* s16 = new ConcatStringTree(s9->concat(*s10));
    ConcatStringTree* s17 = new ConcatStringTree(s10->concat(*s11));
    ConcatStringTree* s18 = new ConcatStringTree(s11->concat(*s12));
    ConcatStringTree* s19 = new ConcatStringTree(s12->concat(*s13));
    ConcatStringTree* s20 = new ConcatStringTree(s13->concat(*s14));

    ConcatStringTree* s21 = new ConcatStringTree(s15->concat(*s16));
    ConcatStringTree* s22 = new ConcatStringTree(s16->concat(*s17));
    ConcatStringTree* s23 = new ConcatStringTree(s17->concat(*s18));
    ConcatStringTree* s24 = new ConcatStringTree(s18->concat(*s19));
    ConcatStringTree* s25 = new ConcatStringTree(s19->concat(*s20));

    ConcatStringTree* s26 = new ConcatStringTree(s21->concat(*s22));
    ConcatStringTree* s27 = new ConcatStringTree(s22->concat(*s23));
    ConcatStringTree* s28 = new ConcatStringTree(s23->concat(*s24));
    ConcatStringTree* s29 = new ConcatStringTree(s24->concat(*s25));

    ConcatStringTree* s30 = new ConcatStringTree(s26->concat(*s27));
    ConcatStringTree* s31 = new ConcatStringTree(s27->concat(*s28));
    ConcatStringTree* s32 = new ConcatStringTree(s28->concat(*s29));

    ConcatStringTree* s33 = new ConcatStringTree(s30->concat(*s31));
    ConcatStringTree* s34 = new ConcatStringTree(s31->concat(*s32));

    ConcatStringTree* s35 = new ConcatStringTree(s33->concat(*s34));

    cout << "==================== BEFORE DELETE ====================" << '\n';
    cout << "PreOrder of Parent s0: " << s0->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s1: " << s1->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s2: " << s2->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s3: " << s3->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s4: " << s4->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s5: " << s5->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s6: " << s6->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s7: " << s7->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s8: " << s8->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s9: " << s9->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s10: " << s10->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s11: " << s11->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s12: " << s12->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s13: " << s13->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s14: " << s14->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s15: " << s15->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s16: " << s16->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s17: " << s17->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s18: " << s18->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s19: " << s19->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s20: " << s20->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s21: " << s21->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s22: " << s22->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s23: " << s23->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s24: " << s24->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s25: " << s25->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s26: " << s26->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s27: " << s27->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s28: " << s28->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s29: " << s29->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s30: " << s30->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s31: " << s31->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s32: " << s32->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s33: " << s33->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s34: " << s34->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s35: " << s35->getParTreeStringPreOrder("") << '\n';
    cout << "==================== END ====================" << '\n';

    delete s4;
    delete s5;
    delete s7;
    delete s9;
    delete s13;
    delete s17;
    delete s18;
    delete s21;
    delete s24;
    delete s33;
    delete s34;

    cout << "==================== CALLING s29 ====================" << '\n';
    cout << "Length of s29: " << s29->length() << '\n';
    cout << "String of s29: " << s29->toString() << '\n';
    cout << "PreOrder of s29: " << s29->toStringPreOrder() << '\n';
    cout << "Size of Parent s29: " << s29->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s29: " << s29->getParTreeStringPreOrder("") << '\n';
    delete s29;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s32 ====================" << '\n';
    cout << "Length of s32: " << s32->length() << '\n';
    cout << "String of s32: " << s32->toString() << '\n';
    cout << "PreOrder of s32: " << s32->toStringPreOrder() << '\n';
    cout << "Size of Parent s32: " << s32->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s32: " << s32->getParTreeStringPreOrder("") << '\n';
    delete s32;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s3 ====================" << '\n';
    cout << "Length of s3: " << s3->length() << '\n';
    cout << "String of s3: " << s3->toString() << '\n';
    cout << "PreOrder of s3: " << s3->toStringPreOrder() << '\n';
    cout << "Size of Parent s3: " << s3->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s3: " << s3->getParTreeStringPreOrder("") << '\n';
    delete s3;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s8 ====================" << '\n';
    cout << "Length of s8: " << s8->length() << '\n';
    cout << "String of s8: " << s8->toString() << '\n';
    cout << "PreOrder of s8: " << s8->toStringPreOrder() << '\n';
    cout << "Size of Parent s8: " << s8->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s8: " << s8->getParTreeStringPreOrder("") << '\n';
    delete s8;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s2 ====================" << '\n';
    cout << "Length of s2: " << s2->length() << '\n';
    cout << "String of s2: " << s2->toString() << '\n';
    cout << "PreOrder of s2: " << s2->toStringPreOrder() << '\n';
    cout << "Size of Parent s2: " << s2->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s2: " << s2->getParTreeStringPreOrder("") << '\n';
    delete s2;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s11 ====================" << '\n';
    cout << "Length of s11: " << s11->length() << '\n';
    cout << "String of s11: " << s11->toString() << '\n';
    cout << "PreOrder of s11: " << s11->toStringPreOrder() << '\n';
    cout << "Size of Parent s11: " << s11->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s11: " << s11->getParTreeStringPreOrder("") << '\n';
    delete s11;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s12 ====================" << '\n';
    cout << "Length of s12: " << s12->length() << '\n';
    cout << "String of s12: " << s12->toString() << '\n';
    cout << "PreOrder of s12: " << s12->toStringPreOrder() << '\n';
    cout << "Size of Parent s12: " << s12->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s12: " << s12->getParTreeStringPreOrder("") << '\n';
    delete s12;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s35 ====================" << '\n';
    cout << "Length of s35: " << s35->length() << '\n';
    cout << "String of s35: " << s35->toString() << '\n';
    cout << "PreOrder of s35: " << s35->toStringPreOrder() << '\n';
    cout << "Size of Parent s35: " << s35->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s35: " << s35->getParTreeStringPreOrder("") << '\n';
    delete s35;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s20 ====================" << '\n';
    cout << "Length of s20: " << s20->length() << '\n';
    cout << "String of s20: " << s20->toString() << '\n';
    cout << "PreOrder of s20: " << s20->toStringPreOrder() << '\n';
    cout << "Size of Parent s20: " << s20->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s20: " << s20->getParTreeStringPreOrder("") << '\n';
    delete s20;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s0 ====================" << '\n';
    cout << "Length of s0: " << s0->length() << '\n';
    cout << "String of s0: " << s0->toString() << '\n';
    cout << "PreOrder of s0: " << s0->toStringPreOrder() << '\n';
    cout << "Size of Parent s0: " << s0->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s0: " << s0->getParTreeStringPreOrder("") << '\n';
    delete s0;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s14 ====================" << '\n';
    cout << "Length of s14: " << s14->length() << '\n';
    cout << "String of s14: " << s14->toString() << '\n';
    cout << "PreOrder of s14: " << s14->toStringPreOrder() << '\n';
    cout << "Size of Parent s14: " << s14->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s14: " << s14->getParTreeStringPreOrder("") << '\n';
    delete s14;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s15 ====================" << '\n';
    cout << "Length of s15: " << s15->length() << '\n';
    cout << "String of s15: " << s15->toString() << '\n';
    cout << "PreOrder of s15: " << s15->toStringPreOrder() << '\n';
    cout << "Size of Parent s15: " << s15->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s15: " << s15->getParTreeStringPreOrder("") << '\n';
    delete s15;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s16 ====================" << '\n';
    cout << "Length of s16: " << s16->length() << '\n';
    cout << "String of s16: " << s16->toString() << '\n';
    cout << "PreOrder of s16: " << s16->toStringPreOrder() << '\n';
    cout << "Size of Parent s16: " << s16->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s16: " << s16->getParTreeStringPreOrder("") << '\n';
    delete s16;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s31 ====================" << '\n';
    cout << "Length of s31: " << s31->length() << '\n';
    cout << "String of s31: " << s31->toString() << '\n';
    cout << "PreOrder of s31: " << s31->toStringPreOrder() << '\n';
    cout << "Size of Parent s31: " << s31->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s31: " << s31->getParTreeStringPreOrder("") << '\n';
    delete s31;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s19 ====================" << '\n';
    cout << "Length of s19: " << s19->length() << '\n';
    cout << "String of s19: " << s19->toString() << '\n';
    cout << "PreOrder of s19: " << s19->toStringPreOrder() << '\n';
    cout << "Size of Parent s19: " << s19->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s19: " << s19->getParTreeStringPreOrder("") << '\n';
    delete s19;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s6 ====================" << '\n';
    cout << "Length of s6: " << s6->length() << '\n';
    cout << "String of s6: " << s6->toString() << '\n';
    cout << "PreOrder of s6: " << s6->toStringPreOrder() << '\n';
    cout << "Size of Parent s6: " << s6->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s6: " << s6->getParTreeStringPreOrder("") << '\n';
    delete s6;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s22 ====================" << '\n';
    cout << "Length of s22: " << s22->length() << '\n';
    cout << "String of s22: " << s22->toString() << '\n';
    cout << "PreOrder of s22: " << s22->toStringPreOrder() << '\n';
    cout << "Size of Parent s22: " << s22->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s22: " << s22->getParTreeStringPreOrder("") << '\n';
    delete s22;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s1 ====================" << '\n';
    cout << "Length of s1: " << s1->length() << '\n';
    cout << "String of s1: " << s1->toString() << '\n';
    cout << "PreOrder of s1: " << s1->toStringPreOrder() << '\n';
    cout << "Size of Parent s1: " << s1->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s1: " << s1->getParTreeStringPreOrder("") << '\n';
    delete s1;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s25 ====================" << '\n';
    cout << "Length of s25: " << s25->length() << '\n';
    cout << "String of s25: " << s25->toString() << '\n';
    cout << "PreOrder of s25: " << s25->toStringPreOrder() << '\n';
    cout << "Size of Parent s25: " << s25->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s25: " << s25->getParTreeStringPreOrder("") << '\n';
    delete s25;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s26 ====================" << '\n';
    cout << "Length of s26: " << s26->length() << '\n';
    cout << "String of s26: " << s26->toString() << '\n';
    cout << "PreOrder of s26: " << s26->toStringPreOrder() << '\n';
    cout << "Size of Parent s26: " << s26->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s26: " << s26->getParTreeStringPreOrder("") << '\n';
    delete s26;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s27 ====================" << '\n';
    cout << "Length of s27: " << s27->length() << '\n';
    cout << "String of s27: " << s27->toString() << '\n';
    cout << "PreOrder of s27: " << s27->toStringPreOrder() << '\n';
    cout << "Size of Parent s27: " << s27->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s27: " << s27->getParTreeStringPreOrder("") << '\n';
    delete s27;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s10 ====================" << '\n';
    cout << "Length of s10: " << s10->length() << '\n';
    cout << "String of s10: " << s10->toString() << '\n';
    cout << "PreOrder of s10: " << s10->toStringPreOrder() << '\n';
    cout << "Size of Parent s10: " << s10->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s10: " << s10->getParTreeStringPreOrder("") << '\n';
    delete s10;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s28 ====================" << '\n';
    cout << "Length of s28: " << s28->length() << '\n';
    cout << "String of s28: " << s28->toString() << '\n';
    cout << "PreOrder of s28: " << s28->toStringPreOrder() << '\n';
    cout << "Size of Parent s28: " << s28->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s28: " << s28->getParTreeStringPreOrder("") << '\n';
    delete s28;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s30 ====================" << '\n';
    cout << "Length of s30: " << s30->length() << '\n';
    cout << "String of s30: " << s30->toString() << '\n';
    cout << "PreOrder of s30: " << s30->toStringPreOrder() << '\n';
    cout << "Size of Parent s30: " << s30->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s30: " << s30->getParTreeStringPreOrder("") << '\n';
    delete s30;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s23 ====================" << '\n';
    cout << "Length of s23: " << s23->length() << '\n';
    cout << "String of s23: " << s23->toString() << '\n';
    cout << "PreOrder of s23: " << s23->toStringPreOrder() << '\n';
    cout << "Size of Parent s23: " << s23->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s23: " << s23->getParTreeStringPreOrder("") << '\n';
    delete s23;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';

    /*
==================== BEFORE DELETE ====================
PreOrder of Parent s0: ParentsTree[(id=1);(id=9)]
PreOrder of Parent s1: ParentsTree[(id=9);(id=2);(id=10)]
PreOrder of Parent s2: ParentsTree[(id=10);(id=3);(id=11)]
PreOrder of Parent s3: ParentsTree[(id=11);(id=4);(id=12)]
PreOrder of Parent s4: ParentsTree[(id=12);(id=5);(id=13)]
PreOrder of Parent s5: ParentsTree[(id=13);(id=6);(id=14)]
PreOrder of Parent s6: ParentsTree[(id=14);(id=7);(id=15)]
PreOrder of Parent s7: ParentsTree[(id=8);(id=15)]
PreOrder of Parent s8: ParentsTree[(id=9);(id=16)]
PreOrder of Parent s9: ParentsTree[(id=16);(id=10);(id=17)]
PreOrder of Parent s10: ParentsTree[(id=17);(id=11);(id=18)]
PreOrder of Parent s11: ParentsTree[(id=18);(id=12);(id=19)]
PreOrder of Parent s12: ParentsTree[(id=19);(id=13);(id=20)]
PreOrder of Parent s13: ParentsTree[(id=20);(id=14);(id=21)]
PreOrder of Parent s14: ParentsTree[(id=15);(id=21)]
PreOrder of Parent s15: ParentsTree[(id=16);(id=22)]
PreOrder of Parent s16: ParentsTree[(id=22);(id=17);(id=23)]
PreOrder of Parent s17: ParentsTree[(id=23);(id=18);(id=24)]
PreOrder of Parent s18: ParentsTree[(id=24);(id=19);(id=25)]
PreOrder of Parent s19: ParentsTree[(id=25);(id=20);(id=26)]
PreOrder of Parent s20: ParentsTree[(id=21);(id=26)]
PreOrder of Parent s21: ParentsTree[(id=22);(id=27)]
PreOrder of Parent s22: ParentsTree[(id=27);(id=23);(id=28)]
PreOrder of Parent s23: ParentsTree[(id=28);(id=24);(id=29)]
PreOrder of Parent s24: ParentsTree[(id=29);(id=25);(id=30)]
PreOrder of Parent s25: ParentsTree[(id=26);(id=30)]
PreOrder of Parent s26: ParentsTree[(id=27);(id=31)]
PreOrder of Parent s27: ParentsTree[(id=31);(id=28);(id=32)]
PreOrder of Parent s28: ParentsTree[(id=32);(id=29);(id=33)]
PreOrder of Parent s29: ParentsTree[(id=30);(id=33)]
PreOrder of Parent s30: ParentsTree[(id=31);(id=34)]
PreOrder of Parent s31: ParentsTree[(id=34);(id=32);(id=35)]
PreOrder of Parent s32: ParentsTree[(id=33);(id=35)]
PreOrder of Parent s33: ParentsTree[(id=34);(id=36)]
PreOrder of Parent s34: ParentsTree[(id=35);(id=36)]
PreOrder of Parent s35: ParentsTree[(id=36)]
==================== END ====================
==================== CALLING s29 ====================
Length of s29: 160
String of s29: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s29: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s29: 2
PreOrder of Parent s29: ParentsTree[(id=30);(id=33)]
==================== END CALLING ====================

==================== CALLING s32 ====================
Length of s32: 320
String of s32: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s32: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s32: 2
PreOrder of Parent s32: ParentsTree[(id=33);(id=35)]
==================== END CALLING ====================

==================== CALLING s3 ====================
Length of s3: 10
String of s3: ConcatStringTree["0123456789"]
PreOrder of s3: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s3: 3
PreOrder of Parent s3: ParentsTree[(id=11);(id=4);(id=12)]
==================== END CALLING ====================

==================== CALLING s8 ====================
Length of s8: 20
String of s8: ConcatStringTree["01234567890123456789"]
PreOrder of s8: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s8: 2
PreOrder of Parent s8: ParentsTree[(id=9);(id=16)]
==================== END CALLING ====================

==================== CALLING s2 ====================
Length of s2: 10
String of s2: ConcatStringTree["0123456789"]
PreOrder of s2: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s2: 3
PreOrder of Parent s2: ParentsTree[(id=10);(id=3);(id=11)]
==================== END CALLING ====================

==================== CALLING s11 ====================
Length of s11: 20
String of s11: ConcatStringTree["01234567890123456789"]
PreOrder of s11: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s11: 3
PreOrder of Parent s11: ParentsTree[(id=18);(id=12);(id=19)]
==================== END CALLING ====================

==================== CALLING s12 ====================
Length of s12: 20
String of s12: ConcatStringTree["01234567890123456789"]
PreOrder of s12: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s12: 3
PreOrder of Parent s12: ParentsTree[(id=19);(id=13);(id=20)]
==================== END CALLING ====================

==================== CALLING s35 ====================
Length of s35: 1280
String of s35: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s35: ConcatStringTree[(LL=640,L=1280,<NULL>);(LL=320,L=640,<NULL>);(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=320,L=640,<NULL>);(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s35: 1
PreOrder of Parent s35: ParentsTree[(id=36)]
==================== END CALLING ====================

==================== CALLING s20 ====================
Length of s20: 40
String of s20: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s20: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s20: 2
PreOrder of Parent s20: ParentsTree[(id=21);(id=26)]
==================== END CALLING ====================

==================== CALLING s0 ====================
Length of s0: 10
String of s0: ConcatStringTree["0123456789"]
PreOrder of s0: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s0: 2
PreOrder of Parent s0: ParentsTree[(id=1);(id=9)]
==================== END CALLING ====================

==================== CALLING s14 ====================
Length of s14: 20
String of s14: ConcatStringTree["01234567890123456789"]
PreOrder of s14: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s14: 2
PreOrder of Parent s14: ParentsTree[(id=15);(id=21)]
==================== END CALLING ====================

==================== CALLING s15 ====================
Length of s15: 40
String of s15: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s15: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s15: 2
PreOrder of Parent s15: ParentsTree[(id=16);(id=22)]
==================== END CALLING ====================

==================== CALLING s16 ====================
Length of s16: 40
String of s16: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s16: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s16: 3
PreOrder of Parent s16: ParentsTree[(id=22);(id=17);(id=23)]
==================== END CALLING ====================

==================== CALLING s31 ====================
Length of s31: 320
String of s31: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s31: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s31: 1
PreOrder of Parent s31: ParentsTree[(id=32)]
==================== END CALLING ====================

==================== CALLING s19 ====================
Length of s19: 40
String of s19: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s19: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s19: 3
PreOrder of Parent s19: ParentsTree[(id=25);(id=20);(id=26)]
==================== END CALLING ====================

==================== CALLING s6 ====================
Length of s6: 10
String of s6: ConcatStringTree["0123456789"]
PreOrder of s6: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s6: 3
PreOrder of Parent s6: ParentsTree[(id=14);(id=7);(id=15)]
==================== END CALLING ====================

==================== CALLING s22 ====================
Length of s22: 80
String of s22: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s22: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s22: 3
PreOrder of Parent s22: ParentsTree[(id=27);(id=23);(id=28)]
==================== END CALLING ====================

==================== CALLING s1 ====================
Length of s1: 10
String of s1: ConcatStringTree["0123456789"]
PreOrder of s1: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s1: 3
PreOrder of Parent s1: ParentsTree[(id=9);(id=2);(id=10)]
==================== END CALLING ====================

==================== CALLING s25 ====================
Length of s25: 80
String of s25: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s25: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s25: 1
PreOrder of Parent s25: ParentsTree[(id=26)]
==================== END CALLING ====================

==================== CALLING s26 ====================
Length of s26: 160
String of s26: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s26: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s26: 2
PreOrder of Parent s26: ParentsTree[(id=27);(id=31)]
==================== END CALLING ====================

==================== CALLING s27 ====================
Length of s27: 160
String of s27: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s27: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s27: 2
PreOrder of Parent s27: ParentsTree[(id=31);(id=28)]
==================== END CALLING ====================

==================== CALLING s10 ====================
Length of s10: 20
String of s10: ConcatStringTree["01234567890123456789"]
PreOrder of s10: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s10: 3
PreOrder of Parent s10: ParentsTree[(id=17);(id=11);(id=18)]
==================== END CALLING ====================

==================== CALLING s28 ====================
Length of s28: 160
String of s28: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s28: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s28: 1
PreOrder of Parent s28: ParentsTree[(id=29)]
==================== END CALLING ====================

==================== CALLING s30 ====================
Length of s30: 320
String of s30: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s30: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s30: 1
PreOrder of Parent s30: ParentsTree[(id=31)]
==================== END CALLING ====================

==================== CALLING s23 ====================
Length of s23: 80
String of s23: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s23: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s23: 1
PreOrder of Parent s23: ParentsTree[(id=24)]
==================== END CALLING ====================
    */
}

void hashTest()
{
    HashConfig hashConfig(2, 0.5, 0.5, 0.75, 2, 4);
    LitStringHash* litStringHash = new LitStringHash(hashConfig);

    ReducedConcatStringTree* s0 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s1 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s2 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s3 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s4 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s5 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s6 = new ReducedConcatStringTree("0123456789", litStringHash);
    ReducedConcatStringTree* s7 = new ReducedConcatStringTree("0123456789", litStringHash);

    ReducedConcatStringTree* s8 = new ReducedConcatStringTree(s0->concat(*s1));
    ReducedConcatStringTree* s9 = new ReducedConcatStringTree(s1->concat(*s2));
    ReducedConcatStringTree* s10 = new ReducedConcatStringTree(s2->concat(*s3));
    ReducedConcatStringTree* s11 = new ReducedConcatStringTree(s3->concat(*s4));
    ReducedConcatStringTree* s12 = new ReducedConcatStringTree(s4->concat(*s5));
    ReducedConcatStringTree* s13 = new ReducedConcatStringTree(s5->concat(*s6));
    ReducedConcatStringTree* s14 = new ReducedConcatStringTree(s6->concat(*s7));

    ReducedConcatStringTree* s15 = new ReducedConcatStringTree(s8->concat(*s9));
    ReducedConcatStringTree* s16 = new ReducedConcatStringTree(s9->concat(*s10));
    ReducedConcatStringTree* s17 = new ReducedConcatStringTree(s10->concat(*s11));
    ReducedConcatStringTree* s18 = new ReducedConcatStringTree(s11->concat(*s12));
    ReducedConcatStringTree* s19 = new ReducedConcatStringTree(s12->concat(*s13));
    ReducedConcatStringTree* s20 = new ReducedConcatStringTree(s13->concat(*s14));

    ReducedConcatStringTree* s21 = new ReducedConcatStringTree(s15->concat(*s16));
    ReducedConcatStringTree* s22 = new ReducedConcatStringTree(s16->concat(*s17));
    ReducedConcatStringTree* s23 = new ReducedConcatStringTree(s17->concat(*s18));
    ReducedConcatStringTree* s24 = new ReducedConcatStringTree(s18->concat(*s19));
    ReducedConcatStringTree* s25 = new ReducedConcatStringTree(s19->concat(*s20));

    ReducedConcatStringTree* s26 = new ReducedConcatStringTree(s21->concat(*s22));
    ReducedConcatStringTree* s27 = new ReducedConcatStringTree(s22->concat(*s23));
    ReducedConcatStringTree* s28 = new ReducedConcatStringTree(s23->concat(*s24));
    ReducedConcatStringTree* s29 = new ReducedConcatStringTree(s24->concat(*s25));

    ReducedConcatStringTree* s30 = new ReducedConcatStringTree(s26->concat(*s27));
    ReducedConcatStringTree* s31 = new ReducedConcatStringTree(s27->concat(*s28));
    ReducedConcatStringTree* s32 = new ReducedConcatStringTree(s28->concat(*s29));

    ReducedConcatStringTree* s33 = new ReducedConcatStringTree(s30->concat(*s31));
    ReducedConcatStringTree* s34 = new ReducedConcatStringTree(s31->concat(*s32));

    ReducedConcatStringTree* s35 = new ReducedConcatStringTree(s33->concat(*s34));

    cout << "==================== BEFORE DELETE ====================" << '\n';
    cout << "PreOrder of Parent s0: " << s0->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s1: " << s1->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s2: " << s2->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s3: " << s3->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s4: " << s4->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s5: " << s5->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s6: " << s6->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s7: " << s7->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s8: " << s8->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s9: " << s9->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s10: " << s10->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s11: " << s11->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s12: " << s12->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s13: " << s13->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s14: " << s14->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s15: " << s15->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s16: " << s16->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s17: " << s17->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s18: " << s18->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s19: " << s19->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s20: " << s20->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s21: " << s21->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s22: " << s22->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s23: " << s23->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s24: " << s24->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s25: " << s25->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s26: " << s26->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s27: " << s27->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s28: " << s28->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s29: " << s29->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s30: " << s30->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s31: " << s31->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s32: " << s32->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s33: " << s33->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s34: " << s34->getParTreeStringPreOrder("") << '\n';
    cout << "PreOrder of Parent s35: " << s35->getParTreeStringPreOrder("") << '\n';
    cout << "==================== END ====================" << '\n';


    delete s4;
    delete s5;
    delete s7;
    delete s9;
    delete s13;
    delete s17;
    delete s18;
    delete s21;
    delete s24;
    delete s33;
    delete s34;

    cout << "==================== CALLING s29 ====================" << '\n';
    cout << "Length of s29: " << s29->length() << '\n';
    cout << "String of s29: " << s29->toString() << '\n';
    cout << "PreOrder of s29: " << s29->toStringPreOrder() << '\n';
    cout << "Size of Parent s29: " << s29->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s29: " << s29->getParTreeStringPreOrder("") << '\n';
    delete s29;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s32 ====================" << '\n';
    cout << "Length of s32: " << s32->length() << '\n';
    cout << "String of s32: " << s32->toString() << '\n';
    cout << "PreOrder of s32: " << s32->toStringPreOrder() << '\n';
    cout << "Size of Parent s32: " << s32->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s32: " << s32->getParTreeStringPreOrder("") << '\n';
    delete s32;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s3 ====================" << '\n';
    cout << "Length of s3: " << s3->length() << '\n';
    cout << "String of s3: " << s3->toString() << '\n';
    cout << "PreOrder of s3: " << s3->toStringPreOrder() << '\n';
    cout << "Size of Parent s3: " << s3->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s3: " << s3->getParTreeStringPreOrder("") << '\n';
    delete s3;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s8 ====================" << '\n';
    cout << "Length of s8: " << s8->length() << '\n';
    cout << "String of s8: " << s8->toString() << '\n';
    cout << "PreOrder of s8: " << s8->toStringPreOrder() << '\n';
    cout << "Size of Parent s8: " << s8->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s8: " << s8->getParTreeStringPreOrder("") << '\n';
    delete s8;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s2 ====================" << '\n';
    cout << "Length of s2: " << s2->length() << '\n';
    cout << "String of s2: " << s2->toString() << '\n';
    cout << "PreOrder of s2: " << s2->toStringPreOrder() << '\n';
    cout << "Size of Parent s2: " << s2->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s2: " << s2->getParTreeStringPreOrder("") << '\n';
    delete s2;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s11 ====================" << '\n';
    cout << "Length of s11: " << s11->length() << '\n';
    cout << "String of s11: " << s11->toString() << '\n';
    cout << "PreOrder of s11: " << s11->toStringPreOrder() << '\n';
    cout << "Size of Parent s11: " << s11->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s11: " << s11->getParTreeStringPreOrder("") << '\n';
    delete s11;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s12 ====================" << '\n';
    cout << "Length of s12: " << s12->length() << '\n';
    cout << "String of s12: " << s12->toString() << '\n';
    cout << "PreOrder of s12: " << s12->toStringPreOrder() << '\n';
    cout << "Size of Parent s12: " << s12->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s12: " << s12->getParTreeStringPreOrder("") << '\n';
    delete s12;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s35 ====================" << '\n';
    cout << "Length of s35: " << s35->length() << '\n';
    cout << "String of s35: " << s35->toString() << '\n';
    cout << "PreOrder of s35: " << s35->toStringPreOrder() << '\n';
    cout << "Size of Parent s35: " << s35->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s35: " << s35->getParTreeStringPreOrder("") << '\n';
    delete s35;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s20 ====================" << '\n';
    cout << "Length of s20: " << s20->length() << '\n';
    cout << "String of s20: " << s20->toString() << '\n';
    cout << "PreOrder of s20: " << s20->toStringPreOrder() << '\n';
    cout << "Size of Parent s20: " << s20->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s20: " << s20->getParTreeStringPreOrder("") << '\n';
    delete s20;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s0 ====================" << '\n';
    cout << "Length of s0: " << s0->length() << '\n';
    cout << "String of s0: " << s0->toString() << '\n';
    cout << "PreOrder of s0: " << s0->toStringPreOrder() << '\n';
    cout << "Size of Parent s0: " << s0->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s0: " << s0->getParTreeStringPreOrder("") << '\n';
    delete s0;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s14 ====================" << '\n';
    cout << "Length of s14: " << s14->length() << '\n';
    cout << "String of s14: " << s14->toString() << '\n';
    cout << "PreOrder of s14: " << s14->toStringPreOrder() << '\n';
    cout << "Size of Parent s14: " << s14->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s14: " << s14->getParTreeStringPreOrder("") << '\n';
    delete s14;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s15 ====================" << '\n';
    cout << "Length of s15: " << s15->length() << '\n';
    cout << "String of s15: " << s15->toString() << '\n';
    cout << "PreOrder of s15: " << s15->toStringPreOrder() << '\n';
    cout << "Size of Parent s15: " << s15->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s15: " << s15->getParTreeStringPreOrder("") << '\n';
    delete s15;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s16 ====================" << '\n';
    cout << "Length of s16: " << s16->length() << '\n';
    cout << "String of s16: " << s16->toString() << '\n';
    cout << "PreOrder of s16: " << s16->toStringPreOrder() << '\n';
    cout << "Size of Parent s16: " << s16->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s16: " << s16->getParTreeStringPreOrder("") << '\n';
    delete s16;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s31 ====================" << '\n';
    cout << "Length of s31: " << s31->length() << '\n';
    cout << "String of s31: " << s31->toString() << '\n';
    cout << "PreOrder of s31: " << s31->toStringPreOrder() << '\n';
    cout << "Size of Parent s31: " << s31->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s31: " << s31->getParTreeStringPreOrder("") << '\n';
    delete s31;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s19 ====================" << '\n';
    cout << "Length of s19: " << s19->length() << '\n';
    cout << "String of s19: " << s19->toString() << '\n';
    cout << "PreOrder of s19: " << s19->toStringPreOrder() << '\n';
    cout << "Size of Parent s19: " << s19->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s19: " << s19->getParTreeStringPreOrder("") << '\n';
    delete s19;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s6 ====================" << '\n';
    cout << "Length of s6: " << s6->length() << '\n';
    cout << "String of s6: " << s6->toString() << '\n';
    cout << "PreOrder of s6: " << s6->toStringPreOrder() << '\n';
    cout << "Size of Parent s6: " << s6->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s6: " << s6->getParTreeStringPreOrder("") << '\n';
    delete s6;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s22 ====================" << '\n';
    cout << "Length of s22: " << s22->length() << '\n';
    cout << "String of s22: " << s22->toString() << '\n';
    cout << "PreOrder of s22: " << s22->toStringPreOrder() << '\n';
    cout << "Size of Parent s22: " << s22->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s22: " << s22->getParTreeStringPreOrder("") << '\n';
    delete s22;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s1 ====================" << '\n';
    cout << "Length of s1: " << s1->length() << '\n';
    cout << "String of s1: " << s1->toString() << '\n';
    cout << "PreOrder of s1: " << s1->toStringPreOrder() << '\n';
    cout << "Size of Parent s1: " << s1->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s1: " << s1->getParTreeStringPreOrder("") << '\n';
    delete s1;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s25 ====================" << '\n';
    cout << "Length of s25: " << s25->length() << '\n';
    cout << "String of s25: " << s25->toString() << '\n';
    cout << "PreOrder of s25: " << s25->toStringPreOrder() << '\n';
    cout << "Size of Parent s25: " << s25->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s25: " << s25->getParTreeStringPreOrder("") << '\n';
    delete s25;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s26 ====================" << '\n';
    cout << "Length of s26: " << s26->length() << '\n';
    cout << "String of s26: " << s26->toString() << '\n';
    cout << "PreOrder of s26: " << s26->toStringPreOrder() << '\n';
    cout << "Size of Parent s26: " << s26->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s26: " << s26->getParTreeStringPreOrder("") << '\n';
    delete s26;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s27 ====================" << '\n';
    cout << "Length of s27: " << s27->length() << '\n';
    cout << "String of s27: " << s27->toString() << '\n';
    cout << "PreOrder of s27: " << s27->toStringPreOrder() << '\n';
    cout << "Size of Parent s27: " << s27->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s27: " << s27->getParTreeStringPreOrder("") << '\n';
    delete s27;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s10 ====================" << '\n';
    cout << "Length of s10: " << s10->length() << '\n';
    cout << "String of s10: " << s10->toString() << '\n';
    cout << "PreOrder of s10: " << s10->toStringPreOrder() << '\n';
    cout << "Size of Parent s10: " << s10->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s10: " << s10->getParTreeStringPreOrder("") << '\n';
    delete s10;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s28 ====================" << '\n';
    cout << "Length of s28: " << s28->length() << '\n';
    cout << "String of s28: " << s28->toString() << '\n';
    cout << "PreOrder of s28: " << s28->toStringPreOrder() << '\n';
    cout << "Size of Parent s28: " << s28->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s28: " << s28->getParTreeStringPreOrder("") << '\n';
    delete s28;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s30 ====================" << '\n';
    cout << "Length of s30: " << s30->length() << '\n';
    cout << "String of s30: " << s30->toString() << '\n';
    cout << "PreOrder of s30: " << s30->toStringPreOrder() << '\n';
    cout << "Size of Parent s30: " << s30->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s30: " << s30->getParTreeStringPreOrder("") << '\n';
    delete s30;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';
    cout << "==================== CALLING s23 ====================" << '\n';
    cout << "Length of s23: " << s23->length() << '\n';
    cout << "String of s23: " << s23->toString() << '\n';
    cout << "PreOrder of s23: " << s23->toStringPreOrder() << '\n';
    cout << "Size of Parent s23: " << s23->getParTreeSize("") << '\n';
    cout << "PreOrder of Parent s23: " << s23->getParTreeStringPreOrder("") << '\n';
    delete s23;
    cout << "==================== END CALLING ====================" << '\n';
    cout << '\n';

    cout << litStringHash->getLastInsertedIndex() << endl;
    cout << litStringHash->toString() << endl;

    delete litStringHash;

    /*
==================== BEFORE DELETE ====================
PreOrder of Parent s0: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s1: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s2: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s3: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s4: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s5: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s6: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s7: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
PreOrder of Parent s8: ParentsTree[(id=2);(id=9)]
PreOrder of Parent s9: ParentsTree[(id=9);(id=3);(id=10)]
PreOrder of Parent s10: ParentsTree[(id=10);(id=4);(id=11)]
PreOrder of Parent s11: ParentsTree[(id=11);(id=5);(id=12)]
PreOrder of Parent s12: ParentsTree[(id=12);(id=6);(id=13)]
PreOrder of Parent s13: ParentsTree[(id=13);(id=7);(id=14)]
PreOrder of Parent s14: ParentsTree[(id=8);(id=14)]
PreOrder of Parent s15: ParentsTree[(id=9);(id=15)]
PreOrder of Parent s16: ParentsTree[(id=15);(id=10);(id=16)]
PreOrder of Parent s17: ParentsTree[(id=16);(id=11);(id=17)]
PreOrder of Parent s18: ParentsTree[(id=17);(id=12);(id=18)]
PreOrder of Parent s19: ParentsTree[(id=18);(id=13);(id=19)]
PreOrder of Parent s20: ParentsTree[(id=14);(id=19)]
PreOrder of Parent s21: ParentsTree[(id=15);(id=20)]
PreOrder of Parent s22: ParentsTree[(id=20);(id=16);(id=21)]
PreOrder of Parent s23: ParentsTree[(id=21);(id=17);(id=22)]
PreOrder of Parent s24: ParentsTree[(id=22);(id=18);(id=23)]
PreOrder of Parent s25: ParentsTree[(id=19);(id=23)]
PreOrder of Parent s26: ParentsTree[(id=20);(id=24)]
PreOrder of Parent s27: ParentsTree[(id=24);(id=21);(id=25)]
PreOrder of Parent s28: ParentsTree[(id=25);(id=22);(id=26)]
PreOrder of Parent s29: ParentsTree[(id=23);(id=26)]
PreOrder of Parent s30: ParentsTree[(id=24);(id=27)]
PreOrder of Parent s31: ParentsTree[(id=27);(id=25);(id=28)]
PreOrder of Parent s32: ParentsTree[(id=26);(id=28)]
PreOrder of Parent s33: ParentsTree[(id=27);(id=29)]
PreOrder of Parent s34: ParentsTree[(id=28);(id=29)]
PreOrder of Parent s35: ParentsTree[(id=29)]
==================== END ====================
==================== CALLING s29 ====================
Length of s29: 160
String of s29: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s29: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s29: 2
PreOrder of Parent s29: ParentsTree[(id=23);(id=26)]
==================== END CALLING ====================

==================== CALLING s32 ====================
Length of s32: 320
String of s32: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s32: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s32: 2
PreOrder of Parent s32: ParentsTree[(id=26);(id=28)]
==================== END CALLING ====================

==================== CALLING s3 ====================
Length of s3: 10
String of s3: ConcatStringTree["0123456789"]
PreOrder of s3: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s3: 15
PreOrder of Parent s3: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
==================== END CALLING ====================

==================== CALLING s8 ====================
Length of s8: 20
String of s8: ConcatStringTree["01234567890123456789"]
PreOrder of s8: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s8: 2
PreOrder of Parent s8: ParentsTree[(id=2);(id=9)]
==================== END CALLING ====================

==================== CALLING s2 ====================
Length of s2: 10
String of s2: ConcatStringTree["0123456789"]
PreOrder of s2: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s2: 15
PreOrder of Parent s2: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
==================== END CALLING ====================

==================== CALLING s11 ====================
Length of s11: 20
String of s11: ConcatStringTree["01234567890123456789"]
PreOrder of s11: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s11: 3
PreOrder of Parent s11: ParentsTree[(id=11);(id=5);(id=12)]
==================== END CALLING ====================

==================== CALLING s12 ====================
Length of s12: 20
String of s12: ConcatStringTree["01234567890123456789"]
PreOrder of s12: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s12: 3
PreOrder of Parent s12: ParentsTree[(id=12);(id=6);(id=13)]
==================== END CALLING ====================

==================== CALLING s35 ====================
Length of s35: 1280
String of s35: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s35: ConcatStringTree[(LL=640,L=1280,<NULL>);(LL=320,L=640,<NULL>);(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=320,L=640,<NULL>);(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s35: 1
PreOrder of Parent s35: ParentsTree[(id=29)]
==================== END CALLING ====================

==================== CALLING s20 ====================
Length of s20: 40
String of s20: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s20: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s20: 2
PreOrder of Parent s20: ParentsTree[(id=14);(id=19)]
==================== END CALLING ====================

==================== CALLING s0 ====================
Length of s0: 10
String of s0: ConcatStringTree["0123456789"]
PreOrder of s0: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s0: 15
PreOrder of Parent s0: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
==================== END CALLING ====================

==================== CALLING s14 ====================
Length of s14: 20
String of s14: ConcatStringTree["01234567890123456789"]
PreOrder of s14: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s14: 2
PreOrder of Parent s14: ParentsTree[(id=8);(id=14)]
==================== END CALLING ====================

==================== CALLING s15 ====================
Length of s15: 40
String of s15: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s15: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s15: 2
PreOrder of Parent s15: ParentsTree[(id=9);(id=15)]
==================== END CALLING ====================

==================== CALLING s16 ====================
Length of s16: 40
String of s16: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s16: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s16: 3
PreOrder of Parent s16: ParentsTree[(id=15);(id=10);(id=16)]
==================== END CALLING ====================

==================== CALLING s31 ====================
Length of s31: 320
String of s31: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s31: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s31: 1
PreOrder of Parent s31: ParentsTree[(id=25)]
==================== END CALLING ====================

==================== CALLING s19 ====================
Length of s19: 40
String of s19: ConcatStringTree["0123456789012345678901234567890123456789"]
PreOrder of s19: ConcatStringTree[(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s19: 3
PreOrder of Parent s19: ParentsTree[(id=18);(id=13);(id=19)]
==================== END CALLING ====================

==================== CALLING s6 ====================
Length of s6: 10
String of s6: ConcatStringTree["0123456789"]
PreOrder of s6: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s6: 15
PreOrder of Parent s6: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
==================== END CALLING ====================

==================== CALLING s22 ====================
Length of s22: 80
String of s22: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s22: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s22: 3
PreOrder of Parent s22: ParentsTree[(id=20);(id=16);(id=21)]
==================== END CALLING ====================

==================== CALLING s1 ====================
Length of s1: 10
String of s1: ConcatStringTree["0123456789"]
PreOrder of s1: ConcatStringTree[(LL=0,L=10,"0123456789")]
Size of Parent s1: 15
PreOrder of Parent s1: ParentsTree[(id=4);(id=2);(id=1);(id=3);(id=6);(id=5);(id=7);(id=8)]
==================== END CALLING ====================

==================== CALLING s25 ====================
Length of s25: 80
String of s25: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s25: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s25: 1
PreOrder of Parent s25: ParentsTree[(id=19)]
==================== END CALLING ====================

==================== CALLING s26 ====================
Length of s26: 160
String of s26: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s26: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s26: 2
PreOrder of Parent s26: ParentsTree[(id=20);(id=24)]
==================== END CALLING ====================

==================== CALLING s27 ====================
Length of s27: 160
String of s27: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s27: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s27: 2
PreOrder of Parent s27: ParentsTree[(id=24);(id=21)]
==================== END CALLING ====================

==================== CALLING s10 ====================
Length of s10: 20
String of s10: ConcatStringTree["01234567890123456789"]
PreOrder of s10: ConcatStringTree[(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s10: 3
PreOrder of Parent s10: ParentsTree[(id=10);(id=4);(id=11)]
==================== END CALLING ====================

==================== CALLING s28 ====================
Length of s28: 160
String of s28: ConcatStringTree["0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s28: ConcatStringTree[(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s28: 1
PreOrder of Parent s28: ParentsTree[(id=22)]
==================== END CALLING ====================

==================== CALLING s30 ====================
Length of s30: 320
String of s30: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s30: ConcatStringTree[(LL=160,L=320,<NULL>);(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=80,L=160,<NULL>);(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s30: 1
PreOrder of Parent s30: ParentsTree[(id=24)]
==================== END CALLING ====================

==================== CALLING s23 ====================
Length of s23: 80
String of s23: ConcatStringTree["01234567890123456789012345678901234567890123456789012345678901234567890123456789"]
PreOrder of s23: ConcatStringTree[(LL=40,L=80,<NULL>);(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=20,L=40,<NULL>);(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789");(LL=10,L=20,<NULL>);(LL=0,L=10,"0123456789");(LL=0,L=10,"0123456789")]
Size of Parent s23: 1
PreOrder of Parent s23: ParentsTree[(id=17)]
==================== END CALLING ====================
    */
}

void tc1()
{
    ConcatStringTree s1("acbbcab");
    cout << s1.length() << endl;
    cout << s1.get(1) << endl;
    try {
        cout << "char at index 10: " << s1.get(10) << endl;
    }
    catch (const out_of_range& ofr) {
        cout << "Exception out_of_range: " << ofr.what() << endl;
    }
    cout << s1.indexOf('b') << endl;

    /* Expected:
    7
    c
    char at index 10: Exception out_of_range: Index of string is invalid!
    2
    */
}

void tc2()
{
    ConcatStringTree s1("Hello");
    ConcatStringTree s2(",_t");
    ConcatStringTree s3 = s1.concat(s2);
    cout << s3.toStringPreOrder() << endl;
    cout << s3.toString() << endl;
    cout << s3.subString(5, 6).toString() << endl;
    cout << s3.reverse().toString() << endl;

    /* Expected:
    ConcatStringTree[(LL=5,L=8,<NULL>);(LL=0,L=5,"Hello");(LL=0,L=3,",_t")]
    ConcatStringTree["Hello,_t"]
    ConcatStringTree[","]
    ConcatStringTree["t_,olleH"]
    */
}

void tc3()
{
    ConcatStringTree* s1 = new ConcatStringTree("a");
    ConcatStringTree* s2 = new ConcatStringTree("b");
    ConcatStringTree* s3 = new ConcatStringTree(s1->concat(*s2));

    cout << s3->getParTreeSize("l") << endl;
    cout << s3->getParTreeStringPreOrder("l") << endl;

    delete s1;
    delete s2;
    delete s3;

    /* Expected:
    2
    ParentsTree[(id=1);(id=3)]
    */
}

void tc4()
{
    HashConfig hashConfig(2, 0.5, 0.5, 0.75, 2, 4);
    LitStringHash* litStringHash = new LitStringHash(hashConfig);
    ReducedConcatStringTree* s1 = new ReducedConcatStringTree("a", litStringHash);
    ReducedConcatStringTree* s2 = new ReducedConcatStringTree("bb", litStringHash);

    cout << s1->toString() << endl;
    cout << s2->toString() << endl;
    ReducedConcatStringTree* s3 = new ReducedConcatStringTree("bb", litStringHash);

    cout << litStringHash->getLastInsertedIndex() << endl;
    cout << litStringHash->toString() << endl;

    delete s3;
    delete s1;
    delete s2;
    delete litStringHash;

    /* Expected:
    ConcatStringTree["a"]
    ConcatStringTree["bb"]
    2
    LitStringHash[();(litS="a");(litS="bb");()]
    */
}

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDOUT);
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDOUT);
    _CrtSetBreakAlloc(18);
    _CrtMemState s1, s2, s3;
    _CrtMemCheckpoint(&s1);
    //func
    _CrtMemCheckpoint(&s2);
    if (_CrtMemDifference(&s3, &s1, &s2))
    {
        _CrtMemDumpStatistics(&s3);

    }
    return 0;
}