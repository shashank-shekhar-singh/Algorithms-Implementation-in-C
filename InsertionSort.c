#include<stdio.h>
#define SIZE 7

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int value = arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[j] > value) {
                for (int k = i; k >= j; k--) {
                    arr[k] = arr[k - 1];
                }
                arr[j] = value;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d  ", arr[i]);



    // int index;
    // for (int i = 0; i < n; i++) {
    //     if (arr[i + 1] < arr[i]) {
    //         for (int j = 0; j <= i; j++) {
    //             if (arr[j] > arr[i + 1])
    //                 index = j;
    //                 break;
    //         }
    //         swap(&arr[index], &arr[i]);
    //     }
    // }
    // for (int i = 0; i < SIZE; i++)
    //     printf("%d  ", arr[i]);
}

int main() {
    int arr[SIZE] = {56, 34, 98, 75, 13, 45, 93};
    InsertionSort (arr, SIZE);
    
    return 0;
}