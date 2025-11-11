#include<stdio.h>
int calculation(int a[], int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
return sum;

}
int main(){

int num;
printf("Enter the number: \n");
scanf("%d",&num);
int arr[num];
for (int i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
int result =calculation(arr,num);
printf("sum in function %d\n",result);
printf("sum in main %d\n",result);



}
