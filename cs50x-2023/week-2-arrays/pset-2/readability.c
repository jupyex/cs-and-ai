#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string passage = get_string("Text: ");
    float L = (float)count_letters(passage)/(float)count_words(passage)*100;
    float S = (float)count_sentences(passage)/(float)count_words(passage)*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int rounded_index = round(index);
    if (rounded_index<1)
    {
        printf("Before Grade 1\n");
    }
    else if (rounded_index>=16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", rounded_index);
    }
}

int count_letters(string text)
{
    int counter = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (islower(text[i])||isupper(text[i]))
        {
            counter+=1;
        }
    }
    return counter;
}

int count_words(string text)
{
    int counter = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            counter+=1;
        }
    }
    counter+=1;
    return counter;
}

int count_sentences(string text)
{
    int counter = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i]==46||text[i]==33||text[i]==63)
        {
            counter+=1;
        }
    }
    return counter;
}
