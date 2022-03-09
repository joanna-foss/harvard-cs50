#include <cs50.h> //header file
#include <stdio.h> //header file

int main(void)
{
    string answer = get_string("What's your name?");
    printf("hello, %s\n", answer);
}

//command line: clang hello.c -o hello -lcs50  <---what is happening here? compiles?
//then run code using ./hello
//in c there is no official string data type which is why we must implement the <cs50.h> to  be able to 