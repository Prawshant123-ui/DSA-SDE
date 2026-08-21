// Declare an integer variable and print its address using & and make another pointer that points the address of that pointer.

// #include <stdio.h>

// int main() {
//     int variable=20;
//     int *ptr=&variable;
//     int **ptr1=&ptr;

//     printf("Vaiable=%d\n",variable);
//     printf("Address of variable=%p\n",ptr);
//     printf("Address of pointer that points the variable=%p\n",ptr1);
//     return 0;
// }


// Derefrencing opertor : An operator that gives the value stored in that address (Denoted by *)
//   Declare a pointer to an int, assign it the address of a variable, and print the value via dereferencing.

// #include <stdio.h>

// int main() {
//     int variable=20;
//     int *ptr=&variable;
//     int  value=*(&variable); // Derefrencing 

//     printf("Vaiable=%d\n",variable);
//    printf("Address of variable=%p\n",ptr);
//     printf("Value of the address that a pointer ptr is pointing=%d",value);


//     return 0;
// }


// Change the value of a variable indirectly through its pointer

#include <stdio.h>

// int main() {
//     int var=30;
//     int *ptr=&var;

//     printf("Before:%d",var);

//     *ptr=20;

//     printf("After:%d",var);
//     return 0;
// }

// Take two integers and swap them using a function with pointer parameters (call by reference)

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp;

//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int a = 10;
//     int b = 20;

//     printf("Before swap: a = %d, b = %d\n", a, b);

//     swap(&a, &b);

//     printf("After swap: a = %d, b = %d\n", a, b);

//     return 0;
// }


// Declare a pointer to a pointer (int **pp) and access the original value through two levels of dereference. 

// #include <stdio.h>

// int main() {
//     int a = 10;

//     int *ptr = &a;
//     int **pp = &ptr;

//     int value = **pp;

//     printf("a = %d\n", a);
//     printf("Value through ptr = %d\n", *ptr);
//     printf("Value through pp = %d\n", **pp);

//     return 0;
// }


//  Declare an array and a pointer to its first element; print elements using pointer arithmetic (*(ptr+i)) instead of arr[i]

// #include <stdio.h>

// int main() {
//     int arr[]={1,2,3};
//     int* ptr=arr;

//     int first=*ptr;
//     int second=*(ptr+1);
//     int third=*(ptr+2);


//     printf("First element of an array=%d\n",first);
//     printf("Second element of an array=%d\n",second);
//     printf("Third element of an array=%d\n",third);


//     return 0;
// }

// Traverse an array using only a pointer and pointer increment (ptr++) in a loop.

// #include <stdio.h>

// int main() {
//     int arr[3] = {1, 2, 3};
//     int *ptr = arr;
//     int size = 3;

//     int *end = arr + size;

//     for (; ptr < end; ptr++) {
//         printf("%d ", *ptr);
//     }

//     return 0;
// }


//  Write a function that accepts an array as a pointer parameter (int *arr) and computes the average. 

#include <stdio.h>

float func(int *arr, int size) {
    int sum = 0;
    int *end = arr + size;

    while (arr < end) {
        sum += *arr;
        arr++;
    }

    return (float)sum / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    float average = func(arr, size);

    printf("Average = %.2f\n", average);

    return 0;
}

