//Program to find squares & cubes of 1 to 10.
#include<stdio.h>
int main() {
    int i;
    
    printf("Number | Square | Cube\n");
    printf("------------------------\n");
    
   
    for (i = 1; i <= 10; i++) {
        int square = i * i;  
        int cube = i * i * i; 
        
   
        printf("%6d | %6d | %4d\n", i, square, cube);
    }
    
    return 0;
}
