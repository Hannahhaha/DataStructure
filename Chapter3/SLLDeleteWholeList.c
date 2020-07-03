#include "stdio.h"
#include <stdlib.h>
#define MAXSIZE 20 //存储空间初始分配
#define OK 1
#define ERROR 0

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList; /* 定义LinkList */

Status ClearList(LinkList *L)
{
    LinkList p,q;
    p=(*L)->next;
    while (p)
    {
        q=p->next;
        free(p);
        p=q;
    }
    (*L)->next=NULL;
    return OK;    
}