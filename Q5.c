#include<stdio.h>
#define num 100

struct  house
{
    int  room_quantity;
    int established_year;
    int city;
};

main(){
    struct  house home [num];

    int n,i;

    printf("Enter the value of home: \n");
    scanf("%d", &n);

    for(i =0 ; i < n ; i++){
         printf("\nEnter details for home %d:\n", i + 1);
        printf("Room quantity: ");
        scanf("%d", &home[i].room_quantity);
        printf("Established year: ");
        scanf("%d", &home[i].established_year);
        printf("City: ");
        scanf("%s", home[i].city);
    }
}