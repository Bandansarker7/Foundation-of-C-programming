#include <stdio.h>

// Function to swap and print (pass by value)
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Value in func: %d %d\n", x, y);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Input two numbers

    swap(a, b);  // Call function (pass by value)
    printf("Value in main: %d %d\n", a, b);  // Original values remain

    return 0;
}
