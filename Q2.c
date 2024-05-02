#include<stdio.h>
main(){
    int a[100], n, i;
    int small;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    small = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < small) {
            small = a[i];
        }
    }

    printf("The smallest element in the array is: %d\n", small);

}