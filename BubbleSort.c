#include<stdio.h>
#define SIZE 7

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

void BubbleSort (int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr [j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag++;
            }
        }
        if (flag == 0) break;
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d  ", arr[i]);
}


int main() {
    int arr[SIZE] = {56, 34, 98, 75, 13, 45, 93};
    BubbleSort (arr, SIZE);
    
    return 0;
}