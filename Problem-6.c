/*Program that will read from the console a random number and check if it is a nonzero 
positive number. If the check is yes, it will determine if the number is a power of 2.  
 
If the check fails the program will check for two more cases. If the number is zero, the 
program will print “Zero is not a valid input”. Else it will print “Negative input is not valid*/
#include<stdio.h>
int main(){

int number;
printf("Enter the number: ");
scanf("%d",&number);
if(number>0){
if((number & (number-1)) == 0){
    printf("%d is a power of two\n",number);

}
else{
    printf("%d is a positive number but not a power of 2.", number);
}


}
else if(number==0){
    printf("Zero is a not a valid input.");
}
else {
    printf("Negative input is not vaild");
}
return 0;
}
