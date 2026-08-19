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

int main() {
    int var=30;
    int *ptr=&var;

    printf("Before:%d",var);

    *ptr=20;

    printf("After:%d",var);
    return 0;
}


