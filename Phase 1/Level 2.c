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

