//单链表的插入和删除
#include<LinkList.h>;
int ListInsert(LinkList *L, int i, ElemType e)
{
    int j = 1;
    LinkList p,s;
    p = *L;
    while(p && j < i){
        p = p->next;
        ++j;
    }
    
}