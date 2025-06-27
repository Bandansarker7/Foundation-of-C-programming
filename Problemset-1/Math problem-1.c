#include <stdio.h>
#include <math.h>

int main() {
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("Floor = %.0f\n", floor(number));
    printf("Ceiling = %.0f\n", ceil(number));

    return 0;
}
