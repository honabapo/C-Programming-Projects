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
