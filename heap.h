//
// Created by 浩然 on 2021/3/7.
//

#ifndef ALG_HEAP_H
#define ALG_HEAP_H
struct HeapStruct; //堆的定义
typedef struct HeapStruct *PriorityQueue;//优先级队列的定义

PriorityQueue Initialize(int MaxElements);//初始化
void Destroy(PriorityQueue H);//销毁
void MakeEmpty(PriorityQueue H);//清空
void Insert(ElememtType X, PriorityQueue H);//插入
ElementType DeleteMin(PriorityQueue H);//取最小值并在队列中删除
ElementType FindMin(PriorityQueue);//查找最小值
int IsEmpty(PriorityQueue H);//判空
int IsFull(PriorityQueue H);//判满
#endif //ALG_HEAP_H
