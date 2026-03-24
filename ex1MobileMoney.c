/*JUUKO Morris*/
/*25/U/BIE/01375/PE*/
#include <stdio.h>
int main () {
    float amountTosend, transactionFee, totalAmount;
    // Prompt the user for the amount to send and the transaction fee percentage
    
    
    printf("Enter the amount you want to send: ");
    scanf("%f", &amountTosend);
    printf("Enter the transaction fee (%%): ");
    scanf("%f", &transactionFee);
   
    // Calculate the transaction fee and the total amount to be paid
    
    transactionFee = amountTosend * transactionFee / 100;
    totalAmount = amountTosend + transactionFee;
   
    // Display the total amount to be paid
   
    printf("The total amount to be paid is: %.2f UGX\n", totalAmount);
    printf("..........Transaction Details..........\n");
    printf("The amount to be sent is: %.2f UGX\n", amountTosend);
    printf("The transaction fee is: %.2f UGX\n", transactionFee);
    printf("The amount to be received by the recipient is: %.2f UGX\n", amountTosend);
    printf("\nThank you for using our service!");


    return 0;

}