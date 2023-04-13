#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");
    int str_bulb[BITS_IN_BYTE];
    int no;

    for (int i = 0, n = strlen(message); i < n; i++)
    {
        no = (int)message[i];
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            if (no % 2 == 0)
            {
                str_bulb[BITS_IN_BYTE - 1 - j] = 0;
            }
            else
            {
                str_bulb[BITS_IN_BYTE - 1 - j] = 1;
            }
            no /= 2;
        }
        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(str_bulb[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
