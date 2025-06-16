#include<stdio.h>
int main(){
float marks;
printf("Enter the marks: ");
scanf("%f",&marks);
if(marks<1 || marks>100){
    printf("Please select marks between 1 to 100");
}
else if(marks>=90 && marks<=100){
    printf("Grade:A");
}
else if(marks>=86 && marks<=89){
    printf("Grade:A-");
}
else if (marks>=82 && marks<=85){
    printf("Grade:B+");
}
else if (marks>=78 && marks<=81){
    printf("Grade:B");
}
else if(marks>=74 && marks<=77){
    printf("Grade:B-");
}
else if(marks>=70 && marks<=73){
    printf("Grade:C+");
}
else if(marks>=66 && marks<=69){
    printf("Grade:C");
}
else if (marks>=62 && marks<=65){
    printf("Grade:C-");
}
else if(marks>=58 && marks<=61){
    printf("Grade:D+");
}
else if(marks>=55 && marks<=57){
    printf("Grade:D");
}
else{
    printf("Grade:F");
}
return 0;
} 