/*
1. Find length of a string without library function

*/
#include <stdio.h>
int main() {
    char str[1000];
    int length;
    fgets(str, sizeof(str), stdin);
    for(length = 0; str[length] != '\0' && str[length] != '\n'; length++);
   
   
   //Hi there
   
    printf("%d\n", length);

    return 0;
}
