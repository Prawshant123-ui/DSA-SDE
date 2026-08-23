// Pattern Printing

// 1. Print a right-angled triangle of stars (n rows).


/*

*
**
***
****
*****

*/

// #include <stdio.h>

// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for (int j=1; j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// reverse right triangle

/*

   *
  **
 ***
****

*/

// #include <stdio.h>

// int main() {
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//         for(int j=0;j<i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pyramid

#include <stdio.h>

int main() {
    int n=3;

for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
        if(j>=n-(i-1) && j<=n+(i-1)){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}



