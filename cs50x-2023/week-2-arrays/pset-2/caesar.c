#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure the program only accepts a single command-line argument, a non-negative integer (k)
    if (argc == 1 || argc > 2 || only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");

        return 1;
    }
    else
    {
        int key = atoi(argv[1]);
        string plaintext = get_string("plaintext: ");

        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            printf("%c", rotate(plaintext[i], key));
        }
        printf("\n");
        return 0;
    }
}


// Function to make sure the argument is an integer
bool only_digits(string s)
{
    bool flag = true;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}

char rotate(char c, int n)
{
    int p;

    if (isupper(c))
    {
        c = ((int)c - 65 + n) % 26 + 65;
    }
    else if (islower(c))
    {
        c = ((int)c - 97 + n) % 26 + 97;
    }
    return c;
}
