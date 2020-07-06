#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
typedef int Status;
#define TRUE 1
#define FALSE 0
typedef struct 
{
    int r[MAXSIZE+1];
    int length;
}SqList;

void swap(SqList *L,int i,int j)
{
    int temp=L->r[i];
    L->r[i]=L->r[j];
    L->r[j]=temp;
}
//O[n2]交换排序
void BubbleSort0(SqList *L)
{
    int i,j;
    for(i=1;i<=L->length;i++)
    {
        for(j=1;j<=L->length;j++)
        {
            if(L->r[i]>L->r[j])
            {
                swap(L,i,j);
            }
        }
    }
}
//冒泡算法，数字小的向上升
void BubbleSort(SqList *L)
{
    int i,j;
    for(i=1;i<=L->length;i++)
    {
        for(j=L->length-1;j>=i;j--)
        {
            if(L->r[j]>L->r[j+1])
            {
                swap(L,j,j+1);
            }
        }
    }
}

//避免有序情况下无意义的循环判断
void BubbleSort2(SqList *L)
{
    int i,j;
    Status flag=TRUE;
    for(i=1;i<=L->length&&flag;i++)
    {
        flag=FALSE;
        for(j=L->length-1;j>=i;j--)
        {
            if(L->r[j]>L->r[j+1])
            {
                swap(L,j,j+1);
                flag=TRUE;
            }
        }
    }
}