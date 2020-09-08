#include<stdio.h>
#define SIZE 8

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

int Partition (int* arr[], int start, int end) {
    int pivot = arr[end];
    int partition_index = start;
    for (int i = start; i < end; i++)
    if (arr[i] <= pivot) {
        swap (&arr[i], &arr[partition_index]);
        partition_index++;
    }
    swap (&arr[partition_index], &arr[end]);
    return partition_index;

}

void QuickSort (int* arr, int start, int end) {
    if (start < end) {
        int partition_index = Partition (&arr, start, end);
        QuickSort (arr, start, partition_index - 1);
        QuickSort (arr, partition_index + 1, end);
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d  ", arr[i]);
}

int main() {
    int arr[SIZE] = {7, 2, 1, 6, 8, 5, 3, 4};
    QuickSort (&arr, 0, 7);
    
    return 0;
}