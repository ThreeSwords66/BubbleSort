#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




void getArr(int arr[], int* n)//�������һ��ָ�룬����ַ�������ڵ��õ�ʱ��Ҫʹ��ȡ��ַ�����
{
    printf("����������Ĵ�С��");
    scanf_s("%d", n);

    printf("������%d��������Ϊ����Ԫ�أ�", *n);
    for (int i = 0; i < *n; i++) {
        scanf_s("%d", &arr[i]);
    }
}