#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);

    result = pow(a, b);

    printf("%.2f\n", result);

    return 0;
}

