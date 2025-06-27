#include <stdio.h>

int main() {
    int height, meter, centimeter;

    printf("Enter height in centimeters: ");
    scanf("%d",&height);

    meter = height/100;
    centimeter = height%100;

    printf("%d meter %d centimeter", meter, centimeter);

    return 0;
}

