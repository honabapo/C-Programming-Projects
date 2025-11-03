/******************************************************************************

Date: November 3, 2015
Description: IF Statements (Maximum Days in a Month)

*******************************************************************************/

   /*  
   Months of the Year (Month Number= Month)
   
    1= January
    2= February
    3= March
    4= April
    5= May 
    6= June
    7= July
    8= August
    9= September
    10= October
    11= November
    12= December */
   
  #include <stdio.h>
   
    int main ()
   
    {
    // Local Declaration
    
    int moy; //moy= month of the year
       
    // Statements
    
    printf ("Enter the month number between 1-12: ");   //Prompts user to input month number
    scanf ("%d", &moy);
    
    if (moy==1)
    printf ("Has 31 days");                             // January has maximum of 31 days.
    else if (moy==2)
    printf ("Has either 28 or 29 days");                // February has maximum of 28 or 29 days during leap yer.
    else if (moy==3)
    printf ("Has 31 days");                             // March has maximum of 31 days.
    else if (moy==4)
    printf ("Has 30 days");                             // April has maximum of 30 days.
    else if (moy==5)
    printf ("Has 31 days");                             // May has maximum of 31 days.
    else if (moy==6)
    printf ("Has 30 days ");                            // June has maximum of 30 days.
    else if (moy==7)
    printf ("Has 31 days");                             // July has maximum of 31 days.
    else if (moy==8)    
    printf ("Has 31 days");                             // August has maximum of 31 days.
    else if (moy==9)
    printf ("Has 30 days");                             // September has maximum of 30 days.
    else if (moy==10)
    printf ("Has 31 days");                             // October has maximum of 31 days.
    else if (moy==11)
    printf ("Has 30 days");                             // November has maximum of 30 days.
    else if (moy==12)
    printf ("Has 31 days");                             // December has maximum of 31 days.
    else
    printf ("\n Invalid month number");                 // Display error message when number input is not 1-12 (beyond specified range)
    
   
  return 0;
  }
    
    