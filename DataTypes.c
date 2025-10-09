/*
Push yourself, because
no one else is going
to do it for you
-unknown-
Description: Data Types - Laboratory Exercise
*/

#include <stdio.h>
#include <stdbool.h>
#define Pi 3.1415936536
#define NameOfSchool "University of Cebu - Main"
#define a 2
#define b 1
#define sum a + b
int main()
{
bool x = true;
bool y = false;
const char letter = 'a';
int num = 3000000000;
char h='H',e='e',l='l',o='o';
long int z = 35000000;
printf("Welcome to %s\n",NameOfSchool);
printf("%d\n",sum);
printf("The Boolean values of x and y are: %d %d respectively.%s\n", x, y);
printf("Literal constant: %0.02f\n",Pi);
printf("Literal constant: %c\n",(int)Pi);
printf("The constant declared is a small letter %c\n",letter);
printf("The value of the variable num is %u\n",num);
printf("This number is very very long => %lu\n",1234567801234567890	);
printf("%c%c%c%c%c\n",h,e,l,l,o);

return 0;

// do not change anything below this line
// -------------------------------------------------------------------------------------------------
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",103,111,111,100,32,108,117,99,107,33,32,60,51);
}
// code ends here.


