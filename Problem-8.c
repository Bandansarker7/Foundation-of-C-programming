/*Program that will decide whether a year is leap year or not.
Yes, if ( Year % 4 == 0 && year % 100 != 0 ) || ( Year % 400 ==0 )*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the number: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("Leap year");
    }
    else{
        printf("It is not leap year");
    }
    return 0;
}