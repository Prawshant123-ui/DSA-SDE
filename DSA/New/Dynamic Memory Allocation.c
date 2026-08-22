// Dynamically allocate a single integer using malloc, assign it a value, print it, then free it.

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *val;
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     val = malloc(sizeof(int));

//     if (val == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     *val = n;

//     printf("Value: %d\n", *val);

//     free(val);

//     return 0;
// }

//  Dynamically allocate an array of n integers (size taken from user input) using malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("The entered array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}


// Dynamically allocate memory for a struct Point using malloc and access its members using ->

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point *ptr;

    ptr = malloc(sizeof(Point));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr->x = 10;
    ptr->y = 20;

    printf("x = %d\n", ptr->x);
    printf("y = %d\n", ptr->y);

    free(ptr);

    return 0;
}