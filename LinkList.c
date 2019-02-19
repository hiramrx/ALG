//单链表的插入和删除
#include "LinkList.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ListInsert(LinkList *L, int i, ElemType e)
{
    int j = 1;
    LinkList p,s;
    p = *L;
    while(p && j < i){
        p = p->next;
        ++j;
    }
    if (!p || j > i)
    {
        return -1;
    }
    s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next; //先赋值给s的后继，否则原p节点的后继就丢失了
    p->next = s;
    return 0;
}

void CreateList(LinkList *L, int n)
{
    LinkList p,r;
    int i;
    srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    r = *L;
    for (i=0; i<n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = rand()%100+1;
        printf("%d\n", p->data);
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

int main()
{
    int a;
    LinkList *node;
    scanf("输入链表的长度%d", &a);
    CreateList(node, a);
    return 0;
}