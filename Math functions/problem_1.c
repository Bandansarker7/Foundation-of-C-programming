/*Write a C program that will take as input a floating-point number, and print the floor and
the ceiling of that number.*/
#include<stdio.h>
#include<math.h>
int main(){

float number;
printf("Enter the number:");
scanf("%f",&number);
printf("Floor value:%.0f\n",floor(number));
printf("Ceiling value:%.0f",ceil(number));
return 0;

}
