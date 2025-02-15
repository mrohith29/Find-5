/*
 * Program to subtract two integer lists.
 */
#include <stdio.h>

void addLists(int list1[], int list2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = list1[i] - list2[i];
    }
}

void printList(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {6, 7, 8, 9, 10};
    int size = sizeof(list1) / sizeof(list1[0]);
    int result[size];

    addLists(list1, list2, result, size);

    printf("List 1: ");
    printList(list1, size);

    printf("List 2: ");
    printList(list2, size);

    printf("Resultant List: ");
    printList(result, size);

    return 0;
}
