#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool check_key(string s);
bool check_duplicates(string s);
char substitution(char p, string c);

int main(int argc, string argv[])
{
    if (argc == 1 || argc > 2 || check_key(argv[1]) == false || check_duplicates(argv[1]) == false)
    {
        printf("Usage: ./substitution key(with 26 different alphabets)\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext: ");

        printf("ciphertext: ");

        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            printf("%c", substitution(plaintext[i], argv[1]));
        }
        printf("\n");
        return 0;
    }
}

bool check_key(string s)
{
    bool flag = true;
    if (strlen(s) != 26)
    {
        flag = false;
    }
    else
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (isalpha(s[i]) == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

bool check_duplicates(string s)
{
    bool flag = true;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

char substitution(char p, string c)
{
    if (isupper(p))
    {
        p = toupper(c[(int)p - 65]);
    }
    else if (islower(p))
    {
        p = tolower(c[(int)p - 97]);
    }
    return p;
}
