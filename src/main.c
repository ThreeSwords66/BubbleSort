#include <stdio.h>
#include "bubblesort.h"





int main() {
    int n;
    int arr[100]; // 假设数组大小不超过 100

    getArr(arr, &n);

    printf("排序前的数组：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\n排序后的数组：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
