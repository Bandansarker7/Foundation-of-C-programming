/*Program that will take two numbers X & Y as inputs and decide whether X is greater
than/less than/equal to Y.*/
#include<stdio.h>
int main (){
    int number1,number2;
    printf("Enter the number: ");
    scanf("%d%d",&number1,&number2);
    if(number1>number2){
        printf("number1 is greater then number2");
    
    }
    else if (number1<number2){
        printf("number1 is less than number2");

    }
    else{
        printf("number1 is equal to number2");
    }
    return 0;
}
