// Find maximum and minimum element

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5] = {2, 4, 1, 7, 0};
    int size = 5;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum:%d\n", max);
    printf("Minimum:%d\n", min);

    return 0;
}


