#include <stdio.h>
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("The number %d is even.\n", num);
    else
        printf("The number %d is odd.\n", num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkEvenOdd(n);
    return 0;
}
