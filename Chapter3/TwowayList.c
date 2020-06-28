//双向链表的存储结构
typedef struct DulNode
{
    ElemType data;
    struct DulNode *prior;
    struct DulNode *next;
}DulNode, *DulLinkList;

