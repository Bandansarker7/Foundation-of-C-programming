//Program that will decide whether a number is positive or not
#include<stdio.h>
int main(){

float number;
printf("Enter the number: ");

scanf("%f",&number);

if(number>=0){
    printf("Positive");
}

else {
    printf("Negative");
}
return 0;

}