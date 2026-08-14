// Conditional thinking (If-else and Boolean logic)
// Goal : Understand how to make decisions using conditions
// Topic covered : Relational operators, Logical operators, nested if-else, multiple conditions/ // Questions : 50

// Level-1 (Simple conditions)

// 1) Take a number and print whether it is positive, negative or zero

#include <stdio.h>
int main()
{
   int num = 0;
   if (num > 0)
   {
      printf("The number is positive");
   }
   else if (num < 0)
   {
      printf("The number is negative");
   }
   else
   {
      printf("The number is zero");
   }

   return 0;
}

// 2) Check the number if it  is even or odd

#include <stdio.h>

int main()
{
   int num = 3;

   if (num % 2 == 0)
   {
      printf("The number is even");
   }
   else
   {
      printf("The number is odd");
   }

   return 0;
}

// check the number is divisible by 5

#include <stdio.h>
int main()
{
   int num = 50;

   if (num % 5 == 0)
   {
      printf("The number is divisible by 5 ");
   }
   else
   {
      printf("The number is not divisible by 5");
   }
}

// Check if the number is divisible by both 5 and 3 or not
#include <stdio.h>

int main()
{
   int num = 4;
   if (num % 5 == 0 && num % 3 == 0)
   {
      printf("Yes the number is divisible by 5 and 3 both");
   }
   else
   {
      printf("No the number is not divisible by 5 and 3 both");
   }
   return 0;
}

// Check if the given year is a leap year

#include <stdio.h>

int main()
{
   int givenYear = 2006;
   if (givenYear % 400 == 0)
   {
      printf("The year is a leap year");
   }
   else if (givenYear % 100 == 0)
   {
      printf("The year is not a leap year");
   }
   else if (givenYear % 4 == 0)
   {
      printf("The year is a leap year");
   }
   else
   {
      printf("The year is not a leap year");
   }
   return 0;
}

// Take two numbers and print the larger one

#include <stdio.h>

int main()
{
   int num1 = 2;
   int num2 = 3;

   if (num1 > num2)
   {
      printf("The larger number is num1 ");
   }
   else if (num1 < num2)
   {
      printf("The larger number is num2 ");
   }
   else
   {
      printf("Both are equal");
   }
   return 0;
}

// Take three numbers and print the largest.

#include <stdio.h>

int main()
{
   int num1 = 4;
   int num2 = 3;
   int num3 = 9;

   if (num1 > num2)
   {
      printf("Num1 is greater");
   }
   else if (num2 > num3)
   {
      printf("Num2 is greater");
   }
   else if (num3 > num2 && num3 > num1)
   {
      printf("Num3 is greater ");
   }
   else
   {
      printf("All are equal");
   }
   return 0;
}
 

// Take a temperature value and print "Cold", "Warm", or "Hot" using range conditions

#include <stdio.h>

int main() {
   float tempVal;
   printf("Enter the temp");
   scanf("%f",&tempVal);

   if(tempVal<0){
      printf("Cold");
   }else if(tempVal>100){
      printf("Hot");
   }else {
      printf("Warm");
   }
   return 0;
}

// Take a character and check if it's a vowel or consonant

#include <stdio.h>

int main() {
   char character;
   printf("Enter the character");
   scanf("%f",&character);

   if(character == "a" || character == "e" || character == "i" || character == "o" || character == "u"){
      printf("The character is vowel");
   }else{
      printf("The character is consonant");
   }
   return 0;
}

//  Take a character and check whether it's uppercase, lowercase, a digit, or a special character.

#include <stdio.h>

int main() {
   char character;
   printf("Enter the character");
   scanf("%f",&character);

   if (character>="A" && character<="Z"){
      printf("The character is an uppercase");
   }else if(character>="a" && character<="z"){
       printf("The character is a lowercase");
   }else if (character>=0 && character<=9){
       printf("The character is a digit");
   }else {
       printf("The character is an special character");
   }
   return 0;
}

