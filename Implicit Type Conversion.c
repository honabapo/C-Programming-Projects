/******************************************************************************

Date: October 30, 2025
Description: Demonstrate automatic promotion of data types

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
// Local Declarations
    bool b= true;
    char c= 'A';
    float d= 245.3;
    int i= 3650;
    short s= 78;
    
//Statements
    printf("bool + char is char;    %c\n", b + c);
    printf("int + short is int;     %d\n", i * s);
    printf("float + char is float:  %f\n", d * c);
    
    c= c + b;                   //bool promoted to char
    d= d + c;                   //char promoted to float
    b= false;
    b= -d;                      //float demoted to bool
    
    printf("\nAfter execution... \n");
    printf("char + true;        %c\n", c);
    printf("float + char;       %f\n", d);
    printf("bool = -float;      %d\n", b);
    
    return 0;
}   //main

 
