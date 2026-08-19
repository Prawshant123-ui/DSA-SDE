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

// #include <stdio.h>

// int add(int a,int b){
//     return a+b;
// }

// int main() {
//     int result=add(1,2);

//     printf("%d",result);

//     return 0;
// }


//  Write a function that takes an array and its size, and returns the sum.


// #include <stdio.h>

// int  sum(int arr[], int size){
//     int total=0;
//      for(int i=0;i<size;i++){
//         total=total+arr[i];
//      }

//      return total;
// }
// int main() {
//     int arr[]={1,2,3,4,5};
//     int size=5;

//     int result=sum(arr,size);

//     printf("Sum=%d",result);
    
//     return 0;
// }


// Write a function that takes an array and returns the maximum element.

#include <stdio.h>


int max(int arr[], int size) {
    int maximum =  arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    return maximum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int result = max(arr, size);

    printf("Maximum = %d", result);

    return 0;
}