#include<stdio.h>
int main(){

int hight,feet,inch;
printf("Enter the hight in inch: ");
scanf("%d",&hight);
feet=hight/12;
inch=hight%12;
printf("%d feet %d inch",feet,inch);
return 0;


}
