#include<stdio.h>
int main(){

float A,B;
printf("Enter the float value: ");

scanf("%f%f",&A,&B);

printf("%.3f+%.3f=%.3f\n",A,B,A+B);

printf("%.3f-%.3f=%.3f\n",A,B,A-B);

printf("%.3f*%.3f=%.6f\n",A,B,A*B);

printf("%.3f/%.3f=%.6f\n",A,B,A/B);

return 0;

}
