#include <stdio.h>

int IsPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void GenNthPrime(int N) {
    int count = 0;  // কততম প্রাইম পাওয়া গেছে
    int num = 2;    // প্রথম প্রাইম চেক শুরু হবে 2 থেকে

    while (1) {
        if (IsPrime(num)) {
            count++;
            if (count == N) {
                printf("%dth Prime:  %d\n", N, num);
                return;
            }
        }
        num++;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    GenNthPrime(N);
    return 0;
}

