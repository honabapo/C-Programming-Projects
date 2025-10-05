/******************************************************************************

Name: Honeleth C. Abapo
Date: October 5, 2025
Decription: Input 2 numbers. Do arithmetic operations. Display the results.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product, quotient, modulo;

//prompt the user to input 2 numbers    
    printf("Enter two numbers:\n\n");    
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
 
//display the sum of the 2 numbers   
    printf ("The sum of %d and %d is %d\n", num1, num2, sum);
//display the difference of the 2 numbers  
    printf ("The difference of %d and %d is %d\n", num1, num2, difference);
//display the product of the 2 numbers  
    printf ("The product of %d and %d is %d\n", num1, num2, product);
//display the quotient of the 2 numbers  
    printf ("The quotient of %d and %d is %d\n", num1, num2, quotient);
//display the remainder of the 2 numbers  
    printf ("The remainder of %d and %d is %d\n", num1, num2, modulo);

    return 0;
}