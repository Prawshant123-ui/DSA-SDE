// Level-2 (Nested If & Multiple Conditions )

// 1) Take three sides and check if they form a valid triangle. 
 
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

// 2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene
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

// 3. Take marks (0–100) and print the corresponding grade (A/B/C/D/F). 

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

// Check if one of two given numbers is a multiple of the other.

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

