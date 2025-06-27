#include <stdio.h>
#include <math.h>

int main() {
    double u, a, s, v;

    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);
    printf("Enter acceleration (a): ");
    scanf("%lf", &a);
    printf("Enter displacement (s): ");
    scanf("%lf", &s);

    v = sqrt((u * u) + (2 * a * s));

    printf("v = %.2f\n", v);

    return 0;
}
