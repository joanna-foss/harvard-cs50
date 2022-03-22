#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc == 2) //makeshift error handling
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

// int argc is the number of command line arguments, string argv[] is a list of all of the command line inputs by human