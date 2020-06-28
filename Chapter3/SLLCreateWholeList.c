 //随机产生n个元素的值，建立带表头结点的单链线性表L（头插法）
 void CreateListHead(LinkList *L ,int n)
 {
    LinkList p;
    int i;
    srand(time(0));
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;
    for(i=0;i<n;i++)
    {
        p=(Linkist)malloc(sizeof(Node));
        p->data=rand()%100+1;
        p->next=(*L)->next;
        (*L)->next=p;
    }

 }

  //随机产生n个元素的值，建立带表头结点的单链线性表L（尾插法）
  void CreateListTail(LinkList *L,int n)
  {
     LinkList p,r;
     int i;
     srand(time(0));
     *L=(LinkList)malloc(sizeof(Node));
     r=*L;
     for(i=0;i<n;i++)
     {
         p=(Node *)malloc(sizeof(Node));
         p->data=rand()%100+1;
         r->next=p;
         r=p;
     }
     r->next=NULL;


  }