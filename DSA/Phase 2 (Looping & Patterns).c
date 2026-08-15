// Phase 2 — Looping & Patterns (Iteration & Flow) 
// Goal: Master loops, iteration, and dry-run thinking. 
// Topics covered: for, while, nested loops, break/continue, mathematical series. 
// Target Questions: 40–50 

// Level 1: Basic Looping 

// 1. Print numbers from 1 to 10.

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d ", i);
//     }
    
//     return 0;
// }

// 2. Print all even numbers between 1 and 100.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

// 