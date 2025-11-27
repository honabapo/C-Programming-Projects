/******************************************************************************
Description: Switch Case: Maximum Days in a Month

*******************************************************************************/
#include <stdio.h>

    int main() {
        int moy;                                                //moy= month of the year

    printf("Enter the month number between 1-12: ");            //Prompts user to input month number
    scanf ("%d", &moy);
    
    switch (moy) {
        case 1:
            printf ("Has 31 days");                             // January has maximum of 31 days.
            break;
        case 2:
            printf ("Has either 28 or 29 days");                // February has maximum of 28 or 29 days during leap year.
            break;
        case 3: 
            printf ("Has 31 days");                             // March has maximum of 31 days.
            break;
        case 4:
            printf ("Has 30 days");                             // April has maximum of 30 days.
            break;
        case 5:
            printf ("Has 31 days");                             // May has maximum of 31 days.
            break;
        case 6:
            printf ("Has 30 days ");                            // June has maximum of 30 days.
            break;
        case 7:
            printf ("Has 31 days");                             // July has maximum of 31 days.
            break;
        case 8:
            printf ("Has 31 days");                             // August has maximum of 31 days.
            break;
        case 9:
            printf ("Has 30 days");                             // September has maximum of 30 days.
            break;
        case 10:
            printf ("Has 31 days");                             // October has maximum of 31 days.
            break;
        case 11:
            printf ("Has 30 days");                             // November has maximum of 30 days.
            break;
        case 12:
            printf ("Has 31 days");                             // December has maximum of 31 days.
            break;
        default:
            printf ("\n Invalid month number");                 // Display error message when number input is not 1-12 (beyond specified range)
            
    }
    return 0;

}