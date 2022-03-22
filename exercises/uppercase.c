#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> //for islower()

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for(int i = 0, length = strlen(s); i < length; i++)
    {
        if(islower(s[i])) // islower returns 0 or non-zero value; remember: 0 is equivalent to false
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}