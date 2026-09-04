#include <stdio.h>

int main(){
    char name[50];
    int units;
    printf("Enter customer name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the number of units: ");
    scanf("%d", &units);


    printf("===============================\n");
    printf("      Electricity Bill\n");
    printf("===============================\n");
    printf("Customer: %s", name );
    printf("Units Consumed: %d\n", units);
    printf("Rate per Unit: %.2f\n", 22.75);
    printf("--------------------------------\n");
    printf("Costs of units: %.2f\n", units * 22.75);
    printf("Line Rent: %.2f\n", (float)150);
    printf("Subtotal: %.2f\n", (units * 22.75)+150);
    printf("GST(17%%): %.2f\n", ((units * 22.75)+150) * 0.17);
    printf("--------------------------------\n");
    printf("Total Payable: %.2f\n", ((units * 22.75)+150) * 1.17);
    return 0;
}