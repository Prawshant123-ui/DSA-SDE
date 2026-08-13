 // Conditional thinking (If-else and Boolean logic)
 // Goal : Understand how to make decisions using conditions
 // Topic covered : Relational operators, Logical operators, nested if-else, multiple conditions/ // Questions : 50

 // Level-1 (Simple conditions)

 //1) Take a number and print whether it is positive, negative or zero

# include <stdio.h>
int main (){
    int num=0;
     if (num>0){
        printf("The number is positive");
     }else if(num<0){
        printf("The number is negative");
     }else{
        printf("The number is zero");
     }

     return 0;
}

 //2) Check the number if it  is even or odd

 #include<stdio.h>

 int main(){
   int num=3;

   if(num%2==0){
      printf("The number is even");
   }else{
      printf("The number is odd");
   }

   return 0;
 }

 // check the number is divisible by 5

 #include<stdio.h>
 int main(){
   int num=50;

   if(num%5==0){
      printf("The number is divisible by 5 ");
   }else {
      printf("The number is not divisible by 5");
   }
 }

