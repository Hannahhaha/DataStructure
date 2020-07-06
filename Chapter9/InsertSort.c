
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

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

void InsertSort(SqList *L)
{
    int i,j;
    for(i=2;i<L->length;i++)
    {
        if(L->r[i]>L->r[i-1])
        {
            L->r[0]=L->r[i];
            for(j=i-1; L->r[j]>L->r[0]; j--)
                L->r[j+1]=L->r[j];
            L->r[j+1]=L->r[0];
        }
    }
}