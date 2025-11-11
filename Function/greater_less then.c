#include<stdio.h>
void comparision(int a, int b){

if (a>b){
    printf("%d is greater then %d\n",a,b);
}
else if(a<b){
    printf("%d is less then %d\n",a,b);
}
else{
    printf("%d is equal to %d",a,b);
}
}
int main(){
int x,y;
printf("Enter the number: \n");
scanf("%d %d",&x,&y);
comparision(x,y);
return 0;
}
