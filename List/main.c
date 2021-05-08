#include"./src/list.h"
int main()
{   
    SListNode *pList = NULL;
    SListInit(&pList, 3, 0);
    SListPushBack(&pList, 1);  //传入的链表头指针的地址，改变链表头的指向
    SListPushBack(&pList, 2);
    SListPushBack(&pList, 3);
    SListPushBack(&pList, 4);
    SListPrint(pList);
    SListInit(&pList, 3, 0);
    return 0;
}