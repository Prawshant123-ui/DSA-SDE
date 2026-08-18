//   Write a function to add two numbers and return the result (without passing the parameter)

// #include <stdio.h>

// void add(){
//     int a=1;
//     int b=3;

//     int result=a+b;
//     printf("%d",result);
// }

// int main() {
//     add();
//     return 0;
// }

//  Write a function to add two numbers and return the result (with passing the parameter)

#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main() {
    int result=add(1,2);

    printf("%d",result);

    return 0;
}

//

