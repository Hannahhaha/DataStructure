#include "stdio.h"


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

//随机产生n个元素的值，建立带表头结点的单链线性表L（头插法）
 void CreateListHead(LinkList *L ,int n)
 {
    LinkList p;
    int i;
    srand(time(0));
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;
    for(i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        p->next=(*L)->next;
        (*L)->next=p;
    }

 }

  //随机产生n个元素的值，建立带表头结点的单链线性表L（尾插法）
  void CreateListTail(LinkList *L,int n)
  {
     LinkList p,r;
     int i;
     srand(time(0));
     *L=(LinkList)malloc(sizeof(Node));
     r=*L;
     for(i=0;i<n;i++)
     {
         p=(Node *)malloc(sizeof(Node));
         p->data=rand()%100+1;
         r->next=p;
         r=p;
     }
     r->next=NULL;


  }