#include "stdio.h"
#include <stdlib.h>
typedef int ElemType; 
typedef int Status;
#define OK 1
#define ERROR 0
#define MAXSIZE 1000

Status GetElem (LinkList L,int i,ElemType *e)
{
  int j;
  LinkList p;
  p=L->next;
  j=1;
  while (p&&j<i)
     {
       p=p->next;
       ++j；
     }
  if(!p||j>i)
     return ERROR;
  *e=p->data;
  return OK;
}