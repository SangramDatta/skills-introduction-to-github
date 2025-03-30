//program to generate the Fibonacci sequence
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}
void fibonacci(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci sequence up to %d terms: \n", n);
    printf("%d %d ", first, second);
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}
