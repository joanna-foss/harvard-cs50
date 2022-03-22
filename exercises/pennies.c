#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    int pennies = round(amount * 100);

    printf("Pennies: %i\n", pennies);
}

//Dollar amount: .99
//Pennies: 99
//Dollar amount: 1.23
//Pennies: 123
//Dollar amount: 4.20
//Pennies: 419    <--   !!! What's this !!! floating-point imprecision

//MUST implement round(amount * 100) at line 7 to avoid this problem.
//Real world implication:
//Boeing airplane requiring reboot after 248 days because 32-bit number would roll over and power would shut-off as side effect.