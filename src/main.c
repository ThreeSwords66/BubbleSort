#include <stdio.h>
#include "bubblesort.h"





int main() {
    int n;
    int arr[100]; // ���������С������ 100

    getArr(arr, &n);

    printf("����ǰ�����飺\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\n���������飺\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
