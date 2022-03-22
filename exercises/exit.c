#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc != 2) //makeshift error handling
    {
        printf("Missing command line arguments!\n");
        return 1; //to exit main app early, return any non-zero integer
    }
    printf("hello, %s\n", argv[1]);
    return 0; //tells you all is well, if not programmed explicitly, main will auto return 0
}