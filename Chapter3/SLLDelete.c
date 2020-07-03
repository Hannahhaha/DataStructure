#include "stdio.h"
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList; /* 定义LinkList */

Status ListDelete (LinkList *L,int i,ElemType *e)
{
   int j;
   LinkList p,q;
   p=*L;
   j=1;
   while(p->next&&j<i)
   {
       p=p->next;
       ++j;
   }
   if(!(p->next)||j>i)
      return ERROR;
   q=p->next;
   p->next=q->next;
   *e=q->data;
   free(q);
   return OK;
}
