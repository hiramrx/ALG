//
// Created by 浩然 on 2021/3/7.
//
#include <heap.h>
#include <stdlib.h>

struct HeapStruct {
    int Capacity;
    int Size;
    ElementType *Elements;
};

PriorityQueue Initialize(int MaxElements) {
    PriorityQueue H;
    if (MaxElements < MinPQSize) {
        printf(priority queue size is too small);
    }

    H = malloc(sizeof(struct HeapStruct));
    if (H == NULL) {
        printf(out of space!!!);
    }

    H->Elements = malloc((MaxElements + 1) * sizeof(ElementType));

    if (H->Elements == NULL) {
        printf(out of space);
    }

    H->Capacity = MaxElements;
    H->Size = 0;
    H->Elements[0] = MinData;

    return H;
}

void Insert(ElementType X, PriorityQueue H) {
    int i;

    if (IsFull(H)) {
        printf(priority queue is full);
        return;
    }

    for (i = ++H->Size; H->Elements[i / 2] > X; i /= 2) {
        H->Elements[i] = H->Elements[i / 2];
    }

    H->Elements[i] = X;
}

