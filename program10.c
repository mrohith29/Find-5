/*
 * Program to find the sum of an array.
 */
#include <stdio.h>
#include <stdlib.h> // Include for malloc and free

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    // Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array elements is %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
