#include<stdio.h>

reverse(n){
    int d1, d2,d3, n;
     d1 = n/100;

     d2 = (n % 100) / 10;

     d3 = n % 10;
     
     return d1*100+d2*10+d3;

}

main(){

    int n , reversed;

    printf("Enter the value of N: \n");
    scanf("%d", &n);

    if(n < 100 || n > 999){
        printf("Enetr 3 digits valid number: \n");
        scanf("%d", &n);
    }
    // else{
    //     printf("Number is invaldi \n");
    // }

    reversed = reverse(n) ;

    printf("Number is reversed: %d\n", reversed);

}