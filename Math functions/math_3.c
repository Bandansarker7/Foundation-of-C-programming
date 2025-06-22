/*Write a C program that will take as input an angle in radian, and calculate the sine, the
cosine and the tangent of the angle.*/
#include <stdio.h>
#include <math.h>

int main() {
    float angle;
    printf("Enter the angle in radians: ");
    scanf("%f", &angle);

    printf("sin of %.2f radians = %.4f\n", angle, sin(angle));
    printf("cos of %.2f radians = %.4f\n", angle, cos(angle));
    printf("tan of %.2f radians = %.4f\n", angle, tan(angle));

    return 0;
}
