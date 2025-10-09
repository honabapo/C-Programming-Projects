/******************************************************************************
Decription: Input 2 numbers. Do arithmetic operations. Display the results.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product, quotient, modulo;

//prompt the user to input 2 numbers    
    printf("Enter 2 numbers:\n\n");    
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2nd number: ");
    scanf ("%d", &num2);
    
// computes for the sum of the 2 numbers   
    sum= num1 + num2;
// computes for the difference of the 2 numbers
    difference= num1 - num2;
// computes for the product of the 2 numbers    
    product= num1 * num2;
//computes for the quotient of the 2 numbers
    quotient= num1 / num2;
//computes for the remainder of the 2 numbers
    modulo= num1 % num2;
    
    printf ("\n");
//display the sum of the 2 numbers   
    printf ("Sum: %d\n",sum);
//display the difference of the 2 numbers  
    printf ("Difference: %d\n",difference);
//display the product of the 2 numbers  
    printf ("Product: %d\n",product);
//display the quotient of the 2 numbers  
    printf ("Quotient: %d\n",quotient);
//display the remainder of the 2 numbers  
    printf ("Remainder: %d\n",modulo);

    return 0;
}

/*  Reflection Question:
    What happens if you enter a non-numeric value?
    Answer: The scanf function fails to read the input because it does not match the expected data type. 
        Because of that, the variable is not assigned any value and so the program doesn't proceed or perform the next set of instructions in the code.
*/
