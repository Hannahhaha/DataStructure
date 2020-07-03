#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef enum {Link,Thread} PointerTag;    //定义线索
typedef struct BithrNode{
    char data;                                //结点数据
    struct BithrNode *pLchild;        
    struct BithrNode *pRchild;                //左右孩子
    PointerTag Ltag;
    PointerTag Rtag;                          //左右标志
}BiThrNode,*BiThrTree;

BiThrTree pre; 
void InThreading(BiThrTree T)
{
     if( T )                        //判断根结点是否为空
    {                            
        InThreading(T->pLchild);   //递归左子树线索
        if (!T->pLchild)           //左子树为空
        {                            
             T->Ltag = Thread;    //前驱线索
            T->pLchild = pre;    //左子树保存前驱结点
         }
        if(!pre->pRchild)          //右孩子为空
        {
            pre->Rtag = Thread;    //后继线索
            pre->pRchild = T;      //右子树指向后继
        }
           pre = T;                   //保持pre指向T的前驱
           InThreading(T->pRchild);   //递归右子树线索化
        }
          return;
} 

int InOrderTaverse_Thr(BiThrTree T)
{
    BiThrTree p;
    p=T->pLchild;
    while(p!=T)
    {
        while (p!=T)
        {
            while (p->Ltag==Link)
                p=p->pLchild;
            printf("%c",p->data);
            while(p->Rtag==Thread&&p->pRchild!=T)
            {
                p=p->pRchild;
                printf("%c",p->data);
            }
            p=p->pRchild;
        }
        return OK;
    }


}
