#include<stdio.h>
int even_odd(int n){
return (n%2==0);
}
int main(){
    int num;
printf("Enter number: \n");
scanf("%d",&num);
if (even_odd(num)){printf("Even");}
else{printf("Odd");}
return 0;
}
