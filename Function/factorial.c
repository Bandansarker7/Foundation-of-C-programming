#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    scanf("%d", &num);  // Input number

    int result = factorial(num);
    printf("%d\n", result);  // Output factorial

    return 0;
}
