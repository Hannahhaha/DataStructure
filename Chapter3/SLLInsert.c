#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20 //存储空间初始分配量
typedef int ElemType; 
typedef int Status;

#define OK 1
#define ERROR 0
typedef struct node
{ 
　  DataType data; //结点的zhi数据域
　  tNode;
　　typedef ListNode,*LinkList;

Status GetElem(LinkList L,int i,ElemType *e)
{
    int j;
    LinkList p,s;
    p=*L;
    j=1;
    while (p&&j<i)
    {
      p=p->next;
      ++j;
    }
    if(!p||j>i)
     return ERROR;
    s=(LinkList)malloc(sizeof(Node));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}