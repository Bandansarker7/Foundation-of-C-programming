#include<stdio.h>
int function(int n){
return (n%2==0) ? 0 : 1;

}
int main(){

int num;
printf("Enter the number: \n");
scanf("%d",&num);
int result=function(num);

if(result==0){
    printf("even",num);
}
else{
    printf("odd",num);
}
return 0;



}
