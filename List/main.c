#include"./src/list.h"
int main()
{   
    SListNode *pList = NULL;
    SListPushBack(&pList, 1);  //传入的链表头指针的地址，改变链表头的指向
    printf("plist: %p \n", pList);
    SListPushBack(&pList, 2);
    printf("plist: %p \n", pList);
    SListPushBack(&pList, 3);
    printf("plist: %p \n", pList);
    SListPushBack(&pList, 4);
    printf("plist: %p \n", pList);
    SListPrint(pList);
    return 0;
}