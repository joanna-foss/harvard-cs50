#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree?\n");

    if(c == 'y' || c == 'Y')
    {
        printf("Then we agree.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Looks like we do not agree.\n");
    }
    else
    {
        printf("That wasn't an input I could recognize.");
    }
}