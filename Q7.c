#include <stdio.h>

main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", (rows - i) * (rows - i));
        }
        printf("\n");
    }

}