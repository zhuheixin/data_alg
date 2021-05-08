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

// 链表的初始化操作
void SListInit(SListNode **pphead, int num_element, elementType x)
{
    if (*pphead == NULL)
    {
        int i=0;
        SListNode *cur = *pphead;
        for(i; i < num_element; i++)
        {
            if (i == 0)
            {
                SListNode *newNode = (SListNode*)malloc(sizeof(SListNode));
                newNode = CreateSlistNode(x);
                *pphead = newNode;
                cur = *pphead;
            }
            else
            {
                SListNode *newNode = (SListNode*)malloc(sizeof(SListNode));
                newNode = CreateSlistNode(x);
                cur->next = newNode;
                cur = cur->next;
            }
        }
    }
    else
    {
        printf("链表已经初始化过，无需再初始化");
    }
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
