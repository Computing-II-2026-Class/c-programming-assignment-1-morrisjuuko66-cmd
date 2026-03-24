/* Name:JUUKO Morris */
/* Student Number: 25/U/BIE/01375/PE */

#include <stdio.h>

int main(void)
{
float unitsConsumed, costPerunit, totalElectricityBill;
    // Prompt the user for the units consumed and the cost per unit


    printf("Enter the units consumed: ");
    scanf("%f", &unitsConsumed);
    printf("Enter the cost per unit: ");
    scanf("%f", &costPerunit);

    // Calculate the total electricity bill

    totalElectricityBill = unitsConsumed * costPerunit;

    // Display the total electricity bill

    printf("The total electricity bill is: %.2f UGX\n", totalElectricityBill);
    printf("..........Electricity Bill Details..........\n");
    printf("The units consumed are: %.2f\n", unitsConsumed);
    printf("The cost per unit is: %.2f UGX\n", costPerunit);
    printf("\nThank you for using our service!");


    return 0;
}
