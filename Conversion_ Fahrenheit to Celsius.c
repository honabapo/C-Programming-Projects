/******************************************************************************
   
    Description: Temperature Conversion (Fahrenheit to Celsius)

*******************************************************************************/

#include <stdio.h>

int main ()
{
    //Declaration of variables of temperature scales: Fahrenheit, Celsius and constant freezing point
    float Fahrenheit, Celsius;
    const float freezing_point= 32;


    // Prompt the user to input a number (temperature in Fahrenheit)
    printf ("Enter temperature in Fahrenheit: ");
    scanf ("%f", &Fahrenheit);
  
   
    // Convert Fahrenheit to Celsius Formula: C= (F- 32) * 5/9
    Celsius= (Fahrenheit - freezing_point) * 5/9 ;

    
    //Display the result
     printf ("%0.02f Fahrenheit = %0.02f Celsius\n", Fahrenheit, Celsius);

    return 0;
}