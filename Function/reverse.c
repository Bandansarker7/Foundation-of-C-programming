#include <stdio.h>

// Function to print array in reverse
void printReverse(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    printReverse(arr, n);  // Call function to print in reverse

    return 0;
}
