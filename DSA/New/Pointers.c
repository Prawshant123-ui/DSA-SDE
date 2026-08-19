#include <stdio.h>

int main() {
    int a=10;
    int *ptr=&a;

    printf("%d\n", ptr);
    printf("%d\n", &a);
    return 0;
}