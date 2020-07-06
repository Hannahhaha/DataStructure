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

void MergeSort(SqList *L)
{
    MSort(L->r,L->r,1,L->length);
}

MSort(int SR[],int TR1[],int s,int t)
{
    int m;
    int TR2[MAXSIZE+1];
    if(s==t)
        TR1[s]=SR[s];
    else
    {
        m=(s+t)/2;
        MSort(SR,TR2,s,m);
        MSort(SR,TR2,m+1,t);
        Merge(TR2,TR1,s,m,t);
    }   
}

void Merge(int SR[],int TR[],int i,int m,int n)
{
    int j,k,l;
    for(j=m+1,k=i;i<m&&j<=n;k++)
    {
        if(SR[i]<SR[j])
           TR[k]=SR[j++];
        else
           TR[k]=SR[j++];
    }
    if(i<=m)
    {
        for(l=0;l<m-i;l++)
           TR[k+1]=SR[i+1];
    }

    if(j<=n)
    {
        for(l=0;l<=n-j;l++)
           TR[k+1]=SR[j+1];
    }

}


void MergeSort2(SqList *L)
{
    int* TR=(int*)malloc(L->length*sizeof(int));
    int k=1;
    while(k<L->length)
    {
        MergePass(L->r,TR,k,L->length);
        k=2*k;
        MergePass(TR,L->r,k,L->length);
        k=2*k;
    }
}

void MergePass(int SR[],int TR[],int s,int n)
{
    int i=1;
    int j;
    while(i<=n-2*s+1)
    {
        Merge(SR,TR,i,i+s-1,i+2*s-1);
        i=i+2*s;
    }
    if(i<-s+1)
        Merge(SR,TR,i,i+s-1,n);
    else
        for(j=i;j<=n;j++)
            TR[j]=SR[j];   
}