// 冒泡排序
#include <stdio.h>

#define MAXSIZE 10

typedef struct {
    int r[MAXSIZE + 1]; //r[0]用作哨兵或临时变量
    int length;
} SqList;

void swap(SqList *L, int i, int j) {
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

void bubble_sort0(SqList *L) {
    int i, j;
    for (i = 1; i < L->length; i++) {
        for (j = i + 1; j <= L->length; j++) {
            if (L->r[i] > L->r[j]) {
                swap(L, i, j);
            }
        }
    }
}

void bubble_sort1(SqList *L) {
    int i, j;
    for (i = 1; i < L->length; i++) {
        for (j = L->length; j >= i; j--) {
            if (L->r[j] > L->r[j + 1]) {
                swap(L, i, j);
            }
        }
    }
}

int main() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int) sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}