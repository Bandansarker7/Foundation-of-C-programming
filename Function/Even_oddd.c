#include<stdio.h>
int function(int n){

if (n%2==0){
    return 0;
}
else{
    return 1;
}


}
int main(){

int num;
printf("Enter the number: \n");
scanf("%d",&num);
int result=function(num);
if (result==0){
    printf("%d is even\n",num);
}
else{
    printf("%d is odd",num);
}


return 0;





}








