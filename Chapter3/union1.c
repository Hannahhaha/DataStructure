#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAX 10
#define ADD 10
#define OVER -2
typedef int ElemType;
typedef int Status;

typedef struct SqList{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList; /* 定义LinkList */
//初始化
 Status InitList(SqList &L)
{
	L.elem = (ElemType *)malloc(MAX * sizeof(ElemType));
	if(!L.elem)
	{
		return ERROR;
	}
	L.length = 0;
	L.listsize = MAX;
	return OK;
 } 

 //添加
 Status InsertList(SqList &L,int i,ElemType e)
 {
 	if(i < 1 || i > L.length + 1)
 	{
 		printf("范围超限\n");
 		return ERROR;
	}
	if(L.length >= L.listsize)
	{
		ElemType * newbase = (ElemType *)realloc(L.elem,(L.listsize + ADD) * sizeof(ElemType));
		if(!newbase)
		{
			printf("申请失败\n");
			exit(OVER);
		}
		L.elem = newbase;
		L.listsize += ADD;
	}
	ElemType *p,*q;
	p = &L.elem[i - 1];
	for(q = &L.elem[L.length - 1];q >= p;q --)
	{
		*(q + 1) = *q;
	}
	*p = e;
	L.length ++;
	return OK;
  } 
  //查询
  Status GetElem(SqList L,int i,ElemType &e)
  {
  	if(i < 1 || i > L.length)
  	{
  		printf("系统查无此人\n");
  		return OK;
	}
	e = L.elem[i - 1];
   } 

   //比较函数
   Status LocateElem(SqList L,ElemType e)
   {
   	int i;
   	for(i = 1;i <= L.length;i ++)
   	{
   		if(L.elem[i - 1] == e)
   		{
   			return ERROR;
		   }
	   }
	   return OK;
	} 
	
   //实现并集的函数
   void Union(SqList &La,SqList Lb) 
   {
   	int i;
   	int j = 0;
   	ElemType e;
   	for(i = 1;i <= Lb.length;i ++)
   	{
   		GetElem(Lb,i,e);
   	/*	printf("Lb\n");
   		printf("%d",e);
   		printf("\n");
   			printf(" = %d",LocateElem(La,e));*/
   		if(LocateElem(La,e) == 1)
   		{
   			j ++;
   			if(j == 1)
   			{
   				InsertList(La,++La.length,e);
			   }
			   else
			   {
			   		InsertList(La,La.length,e);
			   }
   			
   		
   			
   		
   			/*GetElem(La,La.length,e);
   			printf("La\n");
   			printf("%d ",e);
   			printf("\n"); */
	    }
	   }
   }
int main()
{
	SqList La,Lb;
	int i,j;
	ElemType e;
	 InitList(La);
	 InitList(Lb);
	//printf("%d %d",i,j);
	printf("请为La赋3个值:");
	for(i = 1;i <= 3;i ++)
	{
		scanf("%d",&e);
		InsertList(La,i,e);
	}
	printf("请为Lb赋4个值:");
	for(i = 1;i <= 4;i ++)
	{
		scanf("%d",&e);
		InsertList(Lb,i,e);
	}
	printf("处理后的结果:");
	Union(La,Lb);
	for(i = 1;i <= La.length - 1;i ++)
	{
		GetElem(La,i,e);
		printf("%d ",e);
	}

	
 } 