#include <stdio.h>

int main() {
int A,B;

printf("Enter the integer value:");
scanf("%d %d", &A, &B);
printf("%d + %d = %d\n", A, B, A + B);


printf("%d - %d = %d\n", A, B, A - B);

printf("%d * %d = %d\n", A, B, A * B);

printf("%d / %d = %d\n", A, B, A / B);

printf("%d %% %d = %d\n", A, B, A % B);

return 0;
}
