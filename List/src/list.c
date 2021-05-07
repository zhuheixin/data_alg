#include"list.h"

// 创建节点
SListNode* CreateSlistNode(elementType x)
{
        SListNode * newNode= (SListNode*)malloc(sizeof(SListNode));
        if (newNode == NULL)
        {
            printf("申请内存失败！！");
            exit(-1);
        }
        newNode->next = NULL; // 先置为空，不然指针为随机值
        newNode->val = x;
        return newNode;
}

// 打印整个链表
void SListPrint(SListNode *phead)
{
    SListNode *cur = phead;
    while (cur != NULL)
    {
        printf("%d->", cur->val);
        cur = cur->next;   // 遍历所有节点, 指针向后走
    }
}

/**尾插
 * 需要按需索取
 * 先找尾巴
 * **/ 
void SListPushBack(SListNode* *pphead, elementType x)
{
    if (*pphead == NULL)  // pphead存放的是头指针变量的地址， *pphead得到链表头地址
    {
        SListNode *newNode = CreateSlistNode(x);
        *pphead = newNode;
        printf("phead: %p \n", *pphead);
    }
    else
    {
        SListNode *tail = *pphead;
        while(tail->next != NULL) //如果链表没有节点会出现问题
        {
            tail = tail->next;  //  遍历所有节点, 指针向后走
        }
        SListNode *newNode = CreateSlistNode(x);
        tail->next = newNode;
    }
}
