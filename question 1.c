//Program to accept an element finds out how many times that element has existed in an array.
#include <stdio.h>

int main() {
    int flag = 0;  // Initialize flag to 0 (no duplicates by default)
    int n, i, j;
    
    // Take input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int A[n];  // Declare an array of size n
    
    // Take input for the elements of the array
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // Check for duplicates
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] == A[j]) {  // If the elements at i and j are the same
                flag = 1;  // Mark flag as 1 indicating a duplicate
                break;  // Exit the inner loop as we found a duplicate
            }
        }
        if(flag == 1) {  // If duplicate is found, exit the outer loop
            break;
        }
    }
    
    // Check the flag value and print the result
    if(flag == 0) {
        printf("No Duplicate\n");
    } else {
        printf("Duplicate found\n");
    }
    
    return 0;
}
