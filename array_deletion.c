// C Implementation
// Array Deletion
// Deleting An Element from a specific location

#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int k = 4;
    int n = 5;
    int i;
    int j = k;

    printf("\nOriginal array elements:\n");
    for (i = 0; i < n; i++)
        printf("%d \t", array1[i]);

    while (j < n)
    {
        array1[j - 1] = array1[j];
        j = j + 1;
    }

    n = n - 1;

    printf("\nArray elements after delete:\n");
    for (i = 0; i < n; i++)
        printf("%d \t", array1[i]);
}