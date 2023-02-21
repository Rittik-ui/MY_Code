// C Implementation
// Array Update 
// Updating an Element at a Specific Location

#include <stdio.h>

int main() {
    int array1[] = {1,2,3,4,5};
    int k = 2; 
    int n = 5; 
    int item = 8;


    printf("\nOriginal array elements are:\n");
	
    for(int i = 0; i<n; i++) {
        printf("%d \t", array1[i]);
    }
    
    array1[k-1] = item;

    printf("\nArray elements after update:\n");
	
    for(int i = 0; i<n; i++) {
        printf("%d \t", array1[i]);
    }
}