#include<stdio.h>
struct Employee {
    char name[50];
    char role[50];
};

main() {
    FILE *file;
    struct Employee *employees;
    int n , i;


    printf("Enter the number of employees: ");
    scanf("%d", &n);


    employees = (struct Employee *)(n * sizeof(struct Employee));


    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Role: ");
        scanf("%s", employees[i].role);
    }


    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

   
    for (i = 0; i < n; i++) {
        fprintf(file, "Employee %d\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n\n", employees[i].role);
    }


    fclose(file);
    printf("\nEmployee details have been written to data.txt.\n");


}	