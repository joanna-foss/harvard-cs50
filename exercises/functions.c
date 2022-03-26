#include <cs50.h>
#include <stdio.h>

//declaring functions
float multiply_two_floats(float a, float b);
int add_two_ints(int a, int b);

int main(void)
{
    float two_floats_multiplied = multiply_two_floats(3.4, 3.0);
    int sum_of_two_ints = add_two_ints(33, 22);
    printf("The result is %i\n", sum_of_two_ints);
}


float multiply_two_floats(float a, float b)
{
    return a * b;
}

int add_two_ints(int a, int b)
{
    return a + b;
}