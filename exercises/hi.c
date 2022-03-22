#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3); //output: HI!
    printf("%i%i%i\n", c1, c2, c3); //implicit type casting output: 727333
    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3); //explicit type casting output: 72 73 33

    string s = "HI!";
    printf("%s\n", s); //output: HI!
    printf("%i %i %i\n", s[0], s[1], s[2]); //output: 72 73 33; strings are arrays

    // to indicate end of a string we use a "null" value which looks like \0 which is shorthand notation for 8 '0' bits (nicknamed "null") at the end of the string array
    // the computer is using the length of the string + 1 that demarcates the end of the string
    // this is important for the memory allocation for separate strings and to distinguish between the various strings
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); //output 72 73 33 0
}