/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char characterName[]= "Tom";
    int characterAge= 16;
    printf ("He is my bestfriend. His name is %s.\n", characterName);
    printf ("He is %d.\n", characterAge);
    
    characterAge= 30;
    printf ("He likes his name %s ", characterName);
    printf ("but doesn't like being %d.", characterAge);

    return 0;
}