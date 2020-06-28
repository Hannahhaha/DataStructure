 /*
将存在于B中而不存在于线性表A中
的数据元素插入到线性表A中去 
*/

 void union(List *La, List Lb)
 {
    int La_len, Lb_len,i;
    ElemType e;
    La_len = ListLength(La);
    Lb_len = ListLength(Lb);
    for(i=1; i<=Lb_len; i++);
     {
          GetElem(Lb,i,e);
          if(!LocateElem(La, e, equal))
             ListInsert(La, ++La_len, e);
     }
 } 
