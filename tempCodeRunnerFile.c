/*Program that will evaluate simple expressions of the form-
<number1> <operator> <number2>
; where operators are (+, - , *, /)
And if the operator is “/”, then check if <number2> nonzero or not.*/
#include<stdio.h>
int main(){
    float number1,number2;
    char operator;
    printf("Enter the number: \n");
    scanf("%f%f",&number1,&number2);
    scanf("%c",&operator);
    switch(operator){
        case'+':
        printf("Addition: %.2f\n",number1+number2);
        break;
        case '-':
        printf("Subtraction: %.2f\n",number1-number2);
        break;
        case '*':
        printf("Multiplication: %.2f\n",number1*number2);
        case '/':
         if(number2!=0) {
                printf("Division: %.2f\n",number1/number2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}


