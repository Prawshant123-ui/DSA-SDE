// Traversal of an array

// #include <stdio.h>

// int main()
// {
//     int arr[50], size;
//     printf("Enter the size of an array:");
//     scanf("%d", &size);
//     printf("Enter the elements:");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The elements in an array are :");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Insertion of an element in any index of an array

// #include <stdio.h>

// int main()
// {
//     int arr[50] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int val = 0;
//     int idx = 3;

//     for (int i = size; i > idx; i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[idx] = val;
//     size++;

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


//  Insertion of an element at beginning  of an array

// #include <stdio.h>

// int main() {
//     int arr[50]={1,2,3,4,5};
//     int size=5;
//     int val=0;
//      for (int i=size;i>0;i--){
//         arr[i]=arr[i-1];
//      }
//      arr[0]=val;
//      size++;

//      printf("The new array is:");
//      for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//      }
//     return 0;
// }


// Insertion of an element at end  of an array

// #include <stdio.h>

// int main() {
//      int arr[50]={1,2,3,4,5};
//     int size=5;
//     int val=6;

//     arr[size]=val;
//     size++;

//      printf("The new array is:");
//      for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//      }
//     return 0;
// }


// Deletion of an element from any index in an array

// #include <stdio.h>

// int main() {
//     int arr[50]={1,2,3,4,5};
//     int size=5;
//     int idx=2;

//     for(int i=idx;i<size-1;i++){
//         arr[i]=arr[i+1];
//     }
//     size--;

//     printf("The final array is :");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Deletion of an element from the beginning of an array

#include <stdio.h>

int main() {
    int arr[50]={1,2,3,4,5};
    int size=5;

    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    printf("The final array is :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

// Deletion of an element from the end of an array

// #include <stdio.h>

// int main() {
//     int arr[50] = {1, 2, 3, 4, 5};
//     int size = 5;

//     size--;

//     printf("The final array is: ");
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// Find maximum and minimum element

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int arr[5] = {2, 4, 1, 7, 0};
//     int size = 5;
//     int max = INT_MIN;
//     int min = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Maximum:%d\n", max);
//     printf("Minimum:%d\n", min);

//     return 0;
// }

// Reverse an array.
