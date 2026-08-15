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

// // // Level-2 (Nested If & Multiple Conditions )

// // 1) Take three sides and check if they form a valid triangle. 
 
#include <stdio.h>

int main() {
    float a = 1;
    float b = 2;
    float c = 3;

    if (a + b > c && a + c > b && b + c > a) {
        printf("Yes, it's a valid triangle");
    } else {
        printf("It's not a valid triangle");
    }

    return 0;
}

// // 2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene

#include <stdio.h>

int main() {
    float a = 3;
    float b = 4;
    float c = 5;

    // Check whether the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        // Equilateral
        if (a == b && b == c) {
            printf("The triangle is equilateral.");
        }

        // Isosceles
        else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.");
        }

        // Scalene
        else {
            printf("The triangle is scalene.");
        }

    } else {
        printf("The sides do not form a valid triangle.");
    }

    return 0;
}

// // 3. Take marks (0–100) and print the corresponding grade (A/B/C/D/F). 

#include <stdio.h>

int main() {
    float marks;
    printf("Enter your marks");
    scanf("%f",&marks);

    if(marks>=80 && marks>=100){
        printf("A");
    }else if(marks>=60 && marks>=80){
        printf("B");
    }else if(marks>=40 && marks>=60){
        printf("C");
    }else if(marks>=20 && marks>=40){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}

// // Check if one of two given numbers is a multiple of the other.

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter your a and b");
    scanf("%d %d",&a,&b);

    if(a==0 || b==0){
        printf("Cannot check multiples with zeros");
    }else if(a%b==0 && b%a==0){
        printf("One number is multiple of another");
    }else{
        printf("Neither number is multiple of one another");
    }
    return 0;
}

// Take the hour of the day (0–23) and print "Good Morning", "Good Afternoon", "Good Evening", or "Good Night". 


#include <stdio.h>

int main() {
    int hour;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour < 12) {
        printf("Good Morning");
    } 
    else if (hour >= 12 && hour < 17) {
        printf("Good Afternoon");
    } 
    else if (hour >= 17 && hour < 21) {
        printf("Good Evening");
    } 
    else {
        printf("Good Night");
    }

    return 0;
}

// Check voting eligibility for a given age (18+)

#include <stdio.h>

int main() {
    int age;
    printf('Enter your age');
    scanf("%d",&age);

    if(age>=18){
        printf("Yes you can vote");
    }else{
        printf("No you cant vote");
    }
    return 0;
}


// Level 3: Math and Number Logic

// Take a 3-digit number and check if all digits are distinct.

#include <stdio.h>

int main()
{
    int num = 122;
    int a = (num / 100) % 10;
    int b = (num / 10) % 10;
    int c = num % 10;

    if (a != b && b != c && c != a)
    {
        printf("All the digits are distinct");
    }
    else
    {
        printf("All the digits are not distinct");
    }
    return 0;
}

// Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.

#include <stdio.h>

int main()
{
    int num = 153;
    int a = (num / 100) % 10;
    int b = (num / 10) % 10;
    int c = num % 10;

    if(b>a && b> c){
        printf("Largest");
    }else if(b<a && c<a){
        printf("Smallest");
       }else{
        printf("Neither");
       }

    return 0;
}


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

//Level 4: Logical Operators & Compound Statements 

// Take a number and print "Fizz" if divisible by 3, "Buzz" if divisible by 5, and "FizzBuzz" if divisible by both. 

#include <stdio.h>

int main() {
   int num=3;

   if(num%3==0){
      printf("Fizz");
   }else if(num%5==0){
      printf("buzz");
   }else if (num%3==0 && num%5==0){
      printf("Fizzbuzz");
   }
   return 0;
}


// Take three numbers and print the median value (neither maximum nor minimum). 





