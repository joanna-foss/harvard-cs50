#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = amount * 100;

    printf("Pennies: %i\n", pennies);
}

//Dollar amount: .99
//Pennies: 99
//Dollar amount: 1.23
//Pennies: 123
//Dollar amount: 4.20
//Pennies: 419    <--   !!! What's this !!! floating-point imprecision