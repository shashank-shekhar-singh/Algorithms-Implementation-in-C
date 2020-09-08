#include<stdio.h>
#define SIZE 7

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

void SelectionSort (int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        int i_min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i_min]) {
                i_min = j;
            }
        }
        swap(&arr[i], &arr[i_min]);
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d  ", arr[i]);
}

int main() {
    int arr[SIZE] = {56, 34, 98, 75, 13, 45, 93};
    SelectionSort (arr, SIZE);
    
    return 0;
}
































// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// void main()
// {

//     int a[5],i,j,c;
//     printf("Enter the elements:\n");
//     for(i=0;i<5;i++)
//         scanf("%d",&a[i]);
//     printf("The araay is:\n");
//     for(i=0;i<5;i++)
//         printf("%d\t",a[i]);
//     for(i=0;i<5;i++)
//     {

//         for(j=i+1;j<5;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 c=a[i];
//                 a[i]=a[j];
//                 a[j]=c;
//             }
//         }
//     }
//     printf("\nThe sorted array is:\n");
//     for(i=0;i<5;i++)
//         printf("%d\t",a[i]);
// }
