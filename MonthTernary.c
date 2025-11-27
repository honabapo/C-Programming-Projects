/******************************************************************************

Name: Honeleth C. Abapo
Date: November 27, 2025
Description: Ternary Operator: Activity: Maximum Days in a Month

*******************************************************************************/

#include <stdio.h>

int main() {
    int month;                                             
    int days;

    printf("Enter a number (1-12): ");                   // Ask user for month number
    scanf("%d", &month);                                   // Read user input

    //  // Ternary logic to determine number of days
    
    days = (month < 1 || month > 12) ? -1 :                  // Invalid month
           (month == 2) ? 28 :                             // February
           (month == 4 || month == 6 || month == 9 || month == 11) ? 30 :          // 30-day months
           31;                                                             // All others have 31 days

    if (days == -1) {
        printf("Invalid month number.\n");              // Display error message when number input is not 1-12 (beyond specified range)
    } else {
        printf("Has %d days.\n", days);                 // Print number of days
    }

    return 0;
}
