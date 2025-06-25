/*Write a C program that will calculate the terminal velocity of a moving body by using the
following  v2 = u2+2as*/
#include <stdio.h>
#include <math.h>

int main() {
    float u, a, s, v;

    // Take input from user
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter the acceleration (a): ");
    scanf("%f", &a);

    printf("Enter the displacement (s): ");
    scanf("%f", &s);
    v = sqrt(u * u + 2 * a * s);
    printf("The terminal velocity (v) is: %.2f\n", v);

    return 0;
}