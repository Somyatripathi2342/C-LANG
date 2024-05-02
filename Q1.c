#include<stdio.h>
main(){
    int n;

    printf("Enter the value of N:\n");
    scanf("%d", &n);

   switch(n > 0) {
        case 1:
            printf("%d is a positive number.\n", n);
            break;
        case 2:
                    printf("%d is zero.\n", n);
                    break;
            }
}    