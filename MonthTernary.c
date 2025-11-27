/******************************************************************************

Name: Honeleth C. Abapo
Date: November 27, 2025
Description: Ternary Operator: Activity: Maximum Days in a Month

*******************************************************************************/

#include <stdio.h>

int main() {
    int moy;                                             //moy= month of the year
    int days;

    printf("Enter a number (1-12): ");                   // Ask user for month number
    scanf("%d", &moy);                                   // Read user input

    //  // Ternary logic to determine number of days
    
    days = (moy < 1 || moy > 12) ? -1 :                  // Invalid month
           (moy == 2) ? 28 :                             // February
           (moy == 4 || moy == 6 || moy == 9 || moy == 11) ? 30 :          // 30-day months
           31;                                                             // All others have 31 days

    if (days == -1) {
        printf("Invalid month number.\n");              // Display error message when number input is not 1-12 (beyond specified range)
    } else {
        printf("Has %d days.\n", days);                 // Print number of days
    }

    return 0;
}