/*
 * Program to find the sum of an array.
 */
#include <stdio.h>

int main() {
    int n, sum = 0,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the array elements is %d\n", sum);
    return 0;
}
