// C Implementation
// Array Insertion
// Inserting An Element at a specific location



#include <stdio.h>

int main() {
    int array1[] = {1,2,3,4,5};
    int item = 6; 
    int k = 1;
    int n = 5;
    int i = 0;
    int j = n;
    
    printf("\nOriginal array elements:\n");

    for(i = 0; i<n; i++) {
        printf("%d \t",array1[i]);
    }

    n = n + 1;
	
    while( j >= k) {
        array1[j+1] = array1[j];
        j = j - 1;
    }

    array1[k] = item;

    printf("\nArray elements after insertion: \n");

    for(i = 0; i<n; i++) {
        printf("%d \t",array1[i]);
    }
}