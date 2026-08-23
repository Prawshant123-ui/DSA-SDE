// Factorial

#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}

int main() {
    int result = fact(5);

    printf("%d", result);

    return 0;
}

// sum of 1 to n 

#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }

    return n+sum(n-1);
}
int main() {
    int result=sum(10);

    printf("%d\n", result);
    return 0;
}

// fibonacci series

#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2); 
}
int main() {
    int result=fibonacci(10);

    printf("%d\n", result);
    return 0;
    
}

// count the number of digits recursively

#include <stdio.h>
int count(int n){
    if(n==0){
        return 0;
    }

    return 1+count(1/10);
}
int main() {
    int result=count(10);
    printf("%d\n", result);
    return 0;
}

