#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string input);
int count_words(string input);
int count_sentences(string input);
int get_coleman_liau_index(string input);

int main(void)
{
    string user_input = get_string("Please enter text: ");
    int grade_level = get_coleman_liau_index(user_input);
}

//Refactor opportunity. Consider efficiency and not looping over input multiple times.
int count_letters(string input)
{
    int sum = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            sum++;
        }
    }

    return sum;
}

int count_words(string input)
{
    int sum = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        //at space, increment sum to account for word immediately before space.
        if (isspace(input[i]))
        {
            sum++;
        }
    }
    //end of sentence will not contain a space so account for last word of sentence here.
    sum++;

    return sum;
}

int count_sentences(string input)
{
    int sum = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '.' || input[i] == '?' || input[i] == '!')
        {
            sum++;
        }
    }

    return sum;
}

int get_coleman_liau_index(string input)
{
    //get amounts of things
    int letters = count_letters(input);
    int words = count_words(input);
    int sentences = count_sentences(input);

    //calculate averages
    float avg_letters = ((float) letters / words) * 100;
    float avg_sentences = ((float) sentences / words) * 100;

    //use averages in the coleman liau indexing equation
    int index = round(0.0588 * avg_letters - 0.296 * avg_sentences - 15.8);

    int grade = 0;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

    return index;
}