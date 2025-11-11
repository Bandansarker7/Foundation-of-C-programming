#include <stdio.h>

// Function to calculate x^y
int power(int x, int y) {
    int result = 1;
    for(int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);  // Input x and y

    int ans = power(x, y);
    printf("%d to the power %d is %d\n", x, y, ans);

    return 0;
}
