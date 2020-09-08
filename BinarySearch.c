#include<stdio.h>
#define SIZE 8


int BinarySearchIterative (int arr[], int n, int data) {
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (data == arr[mid]) return mid;
        else if (data < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int BinarySearchRecursive (int arr[], int low, int high, int data) {
    int mid = low + (high - low) / 2;
    if (low > high) return -1;
    if (data == arr[mid]) return mid;
    else if (data < arr[mid]) return BinarySearchRecursive (arr, low, mid -1, data);
    else return BinarySearchRecursive (arr, mid + 1, high, data);
}


int main() {
    int arr[8] = {11, 28, 34, 40, 55, 62, 79, 83};
    printf("Enter a no. to search : ");
    int data;
    scanf("%d", &data);
    // int index = BinarySearchIterative (arr, SIZE, data);
    int index = BinarySearchRecursive (arr, 0, SIZE, data);
    if (index > -1) printf("Found at index %d", index);
    else printf("Not found");




    return 0;
}