#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

void meow(int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("Meow.\n");
        sleep(1);
    }
}

int main(void)
{
    int meow_count = get_int("How many times shall I meow for you?\n");
    meow(meow_count);
}