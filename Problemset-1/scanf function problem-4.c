#include<stdio.h>
int main(){

int a,b,c,d,result;

printf("Enter the value:");

scanf("%d%d%d%d",&a,&b,&c,&d);

result = a*b+(a-c)/d+b;

printf("%d*%d+(%d-%d)/%d+%d=%d",a,b,a,c,d,b,result);


return 0;

}
