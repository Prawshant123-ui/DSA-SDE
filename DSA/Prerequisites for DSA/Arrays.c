//  Find the sum of all elements in an array.

// #include <stdio.h>

// int main() {
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("\n%d",sum);
//     return 0;
// }

// Finding the smallest value in an array

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int smallest = __INT_MAX__;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }

//     printf("%d", smallest);

//     return 0;
// }

// Average of array elements

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = 0;
    int avg;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);

        sum = sum + arr[i];
    }

    avg = sum / size;

    printf("\nSum: %d\n", sum);
    printf("Avg: %d\n", avg);

    return 0;
}

// 