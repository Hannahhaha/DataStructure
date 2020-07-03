
#include "stdio.h"
#include <stdlib.h>
#define MAXSIZE 20 //存储空间初始分配量
typedef int ElemType; 
typedef struct 
{
    ElemType data [MAXSIZE]; //数组存储数据结构，最大值Maxsize
    int length; //线性表当前长度
}SqList;
