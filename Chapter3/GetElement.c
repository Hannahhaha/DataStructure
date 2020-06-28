#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 //存储空间初始分配量
typedef int Status;
typedef int SqList ;
typedef int ElemType; 

Status GetElem( SqList L, int i, ElemType *e)
{
     if(L.length==0|| i<1 || i>L.length)
         return ERROR;
     *e=L.data[i-1];
     return OK;

}