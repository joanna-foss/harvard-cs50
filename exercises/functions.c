#include <cs50.h>
#include <stdio.h>

float multiply_two_floats(float a, float b)
{
    return a * b;
}

int main(void)
{
    float number = multiply_two_floats(3.4, 3.0);
    printf("The result is %f\n", number);
}