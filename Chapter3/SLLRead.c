#include "stdio.h"
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define MAXSIZE 1000

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList; /* 定义LinkList */


Status GetElem (LinkList L,int i,ElemType *e)
{
  int j;
  LinkList p;
  p=L->next;
  j=1;
  while (p&&j<i)
     {
       p=p->next;
       ++j;
     }
  if(!p||j>i)
     return ERROR;
  *e=p->data;
  return OK;
}