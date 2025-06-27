#include<stdio.h>
int main(){

float a,b,c,d;
float result;
printf("Enter the float value: ");
scanf("%f%f%f%f",&a,&b,&c,&d);

result=(a+b-c)*d-a/d;

printf("(%.1f+%.1f-%.1f)*%.1f-%.1f/%.1f=%.6f",a,b,c,d,a,d,result);
return 0;

}
