/* Name: JUUKO Morris */
/* Student Number: 25/U/BIE/01375/PE */

#include <stdio.h>

int main(void)
{
float distance, fuel, fuel_efficiency;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel consumed in liters: ");
    scanf("%f", &fuel);
    fuel_efficiency = distance / fuel;
    printf("Your fuel efficiency is: %.2f km/l", fuel_efficiency);

    return 0;
}
