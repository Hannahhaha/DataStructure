
#define MAXSIZE 20 //存储空间初始分配量
typedef int ElemType; 
typedef int Status;
#define OK 1
#define ERROR 0

typedef struct 
{
    ElemType data [MAXSIZE]; //数组存储数据结构，最大值Maxsize
    int length; //线性表当前长度
}SqList;
 
Status ListDelete (SqList *L, int i, ElemType e)
 {
     int k;
     if (L->length==0)
         return ERROR;

     if(i<1||i>L->length+1)
         return ERROR;
     *e=L->data[i-1];

     if(i<L->length)
     {
         for(k=i;k<L->length;k++)
             L->data[k-1]=L->data[k]; 
             
     L->length--;
     return OK;     
     }
 }