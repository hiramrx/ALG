//
// Created by Hiram on 2020/7/30.
//

#ifndef ALG_SQLIST_H
#define ALG_SQLIST_H

#define MAXSIZE 20
typedef int ElemType;
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;

Status GetElem(SqList L, int i, ElemType *e) {
    if (L.length == 0 || i < 0 || i > L.length) {
        return ERROR;
    }

    *e = L.data[i-1];
    return OK;
}

Status ListInsert(SqList *L, int i, ElemType e) {
    if (L->length == MAXSIZE) { //sqlist has full
        return ERROR;
    }
    if (i > L->length || i < 1) { // i is incorrect
        return ERROR;
    }

    int j = L->data[i-1]; // save temporary variable
    L->data[i-1] = e;

    if (i <= L->length) {
        for (int k = i; k < L->length; k++) {
            L->data[i] = j;
            j = L->data[i+1];
        }
    }
    L->length++;
    return OK;
}

#endif //ALG_SQLIST_H
