#include<stdio.h>
#define n 100
square(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i); 
    }
}

main() {
    int arr[n];
    int size;

    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    square(arr, size);

    printf("Squared elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}