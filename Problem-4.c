/*Program that will check whether a triangle is valid or not, when the three angles (angle value
should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
    [Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees]*/

#include<stdio.h>

int main(){
    int A, B, C;

    printf("Enter the number: ");
    scanf("%d%d%d", &A, &B, &C);

    if(A > 0 && A < 180 && B > 0 && B < 180 && C > 0 && C < 180){
        if(A + B + C == 180){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else {
        printf("Invalid Input.\nPlease kindly correct your input.\n");
    }

    return 0;
}
