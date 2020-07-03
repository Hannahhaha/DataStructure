#include "stdio.h"
#include <stdlib.h>
#define MAXSIZE 20 //存储空间初始分配量
typedef int ElemType; 
typedef int Status;
#define OK 1
#define ERROR 0

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