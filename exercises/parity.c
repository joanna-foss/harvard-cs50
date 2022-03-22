#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("choose an integer: ");

    if(n % 2 == 0) {
        printf("That number is even.\n");
    } else {
        printf("That number is odd.\n");
    }
}