// C Implementation
// Array Traversal
// Printing All Array Elements

#include <stdio.h>

int main() {
    int array1[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    
    printf("Array Elements:\n");

    for(int i = 0; i<n; i++) {
        printf("%d \t", array1[i]);
    }
}