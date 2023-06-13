#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




void getArr(int arr[], int* n)//传入的是一个指针，即地址。所以在调用的时候要使用取地址运算符
{
    printf("请输入数组的大小：");
    scanf_s("%d", n);

    printf("请输入%d个整数作为数组元素：", *n);
    for (int i = 0; i < *n; i++) {
        scanf_s("%d", &arr[i]);
    }
}