#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for x
    float x = get_float("x: ");

    //Prompt user for y
    float y = get_float("y: ");

    //Do maths
    float total = x / y;

    //Print solution
    printf("total: %f\n", total);
}

//floating-point precision: fundamental problem where are maths are not accurate 100% of the time.
//truncation: int / int throws away anything beyond decimal if result saved as float
//19 January 2038 world ends??? --total number of seconds! 2 billion is the max. More bits!