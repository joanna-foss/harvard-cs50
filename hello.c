#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name?");
    printf("hello, %s\n", answer);
}

//command line: clang hello.c -o hello -lcs50  <---what is happening here?