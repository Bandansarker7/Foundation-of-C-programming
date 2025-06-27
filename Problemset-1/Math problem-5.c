#include <stdio.h>
#include <math.h>

int main() {
int a, b, c;
int discriminant, sqrt_d, x1, x2;

printf("Enter values of a, b and c: ");
scanf("%d %d %d", &a, &b, &c);

discriminant = b * b - 4 * a * c;

if (discriminant < 0) {
printf("No real roots.\n");
} else {
sqrt_d = (int)sqrt(discriminant);
        x1 = (-b + sqrt_d) / (2 * a);
        x2 = (-b - sqrt_d) / (2 * a);

printf("x1 = %d.00\n", x1);
printf("x2 = %d.00\n", x2);
    }

return 0;
}
