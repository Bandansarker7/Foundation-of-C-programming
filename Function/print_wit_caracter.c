#include<stdio.h>
void num(int a, char b){
printf("value received from main: %d\n",a);
printf("value received from main: %c",b);

}
int main(){
int a;
char b;

printf("Enter the number: \n");
scanf("%d",&a);
printf("Enter the character: \n");

scanf(" %c",&b);
num(a,b);
return 0;
}
