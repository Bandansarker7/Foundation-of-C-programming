#include<stdio.h>
int main(){

float a,b,c,d;
a=30.4;
b=20.3;
c=10.9;
d=5.6;
float result=(a + b - c) * d - a / d;
printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f =%f", a,b,c,d,a,d,result);
return 0;

}
