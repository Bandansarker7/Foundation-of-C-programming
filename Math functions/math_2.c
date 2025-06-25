/*2. Write a C program that will take as input two floating point numbers a and b, and print
the value of a to the power b.*/
#include<stdio.h>
#include<math.h>
int main(){
    float a, b;
    printf("Enter the valuo of a and b: ");
    scanf("%f%f",&a,&b);
    printf("%.0f",pow(a, b));
    return 0;
}