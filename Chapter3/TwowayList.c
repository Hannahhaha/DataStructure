#include "stdio.h"
#include <stdlib.h>
typedef int ElemType; 
#define OK 1
#define ERROR 0
#define MAXSIZE 1000

//双向链表的存储结构
typedef struct DulNode
{
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
}DulNode, *DulLinkList;

