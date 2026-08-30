// Find maximum and minimum element.

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int max = INT_MIN;
//     int min = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//          if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Maximum:%d\n", max);
//     printf("Minimum:%d\n", min);

//     return 0;
// }

// Reverse an array.

// #include <stdio.h>
//  int reverseArray(int arr[],int size){
//     int start=0;
//     int end=size-1;

//     while(start<end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;

//         start++;
//         end--;
//     }
//     return -1;
//  }
// int main() {
//     int arr[]={1,2,3,4,5};
//     int size=5;

//     reverseArray(arr,size);
//     printf("Reversed array is :");
//     for(int i=0;i<size;i++){
//         printf(" %d ",arr[i]);
//     }

//     return 0;
// }

// Rotate an array.

#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int k)
{
    k = k % size;
    reverseArray(arr, 0, size - 1);
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    int k = 4;
    rotateArray(arr, size, k);

    printf("The rotated array is :");

    for (int i = 0; i < size, i++);
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
