// Take a 3-digit number and check if all digits are distinct.

// #include <stdio.h>

// int main()
// {
//     int num = 122;
//     int a = (num / 100) % 10;
//     int b = (num / 10) % 10;
//     int c = num % 10;

//     if (a != b && b != c && c != a)
//     {
//         printf("All the digits are distinct");
//     }
//     else
//     {
//         printf("All the digits are not distinct");
//     }
//     return 0;
// }

// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.

// #include <stdio.h>

// int main()
// {
//     int num = 153;
//     int a = (num / 100) % 10;
//     int b = (num / 10) % 10;
//     int c = num % 10;

//     if(b>a && b> c){
//         printf("Largest");
//     }else if(b<a && c<a){
//         printf("Smallest");
//        }else{
//         printf("Neither");
//        }

//     return 0;
// }


// Take a 4-digit number and check if the first and last digits are equal

#include <stdio.h>

int main() {
    int num=1231;

    int first=(num/1000)%10;
    int last=num%10;

    if(first==last){
        printf("Yes the first and last digits are equal");
    }else{
        printf("No the first and last digits are not equal");
    }
    return 0;
}