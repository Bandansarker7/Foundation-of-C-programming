#include <stdio.h>

int IsPrime(int n);

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (IsPrime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}

int IsPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}
