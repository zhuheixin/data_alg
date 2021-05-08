// # ifndef __LIST_H__
// # define __LIST_H__

# include<stdio.h>
# include<malloc.h>
# include<stdlib.h>
typedef int elementType;
typedef struct SListNode
{
    elementType val;
    struct SListNode *next;
}SListNode;

// 接口 
void SListPushBack(SListNode **pphead, elementType x);
void SListPopBack(SListNode *phead);
void SListPushFront(SListNode *phead, elementType x);
void SListPopFront(SListNode *phead);
void SListInit(SListNode **pphead, int num_element, elementType x);
SListNode* CreateSlistNode(elementType x);
void SListPrint(SListNode *phead);
// # endif __LIST_H__