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
/*
for (i = 0; i < n - 1; i++)：外层循环，控制比较和交换的轮数。
从第一个元素开始，一直到倒数第二个元素。

for (j = 0; j < n - i - 1; j++)：内层循环，在每一轮外层循环中，
用于比较相邻的元素并进行交换。每轮循环从第一个元素开始，
一直到未排序部分的末尾。

if (arr[j] > arr[j + 1])：判断当前元素是否大于后一个元素，
如果成立，则执行下面的交换操作。

int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
：交换相邻元素的位置，将较大的元素往后移动。


*/



void getArr(int arr[], int* n)//传入的是一个指针，即地址。所以在调用的时候要使用取地址运算符
{
    printf("请输入数组的大小：");
    scanf_s("%d", n);

    printf("请输入%d个整数作为数组元素：", *n);
    for (int i = 0; i < *n; i++) {
        scanf_s("%d", &arr[i]);
    }
}