#include <cs50.h>
#include <stdio.h>

//declaring functions
float multiply_two_floats(float a, float b);
int add_two_ints(int a, int b);
bool valid_triangle(int a, int b, int c);

int main(void)
{
    float two_floats_multiplied = multiply_two_floats(3.4, 3.0);
    int sum_of_two_ints = add_two_ints(33, 22);

    bool triangle_validity = valid_triangle(1, 1, 3);
    printf("The result is %s\n", triangle_validity ? "true" : "false");
}


float multiply_two_floats(float a, float b)
{
    return a * b;
}

int add_two_ints(int a, int b)
{
    return a + b;
}

bool valid_triangle(int a, int b, int c)
{
    bool is_valid = true;

    if((a + b <= c) || (b + c <= a) || (a + c <= b))
    {
        is_valid = false;
    }
    return is_valid;
}