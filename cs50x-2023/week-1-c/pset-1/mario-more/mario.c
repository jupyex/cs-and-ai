#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_grid(int size);

int main(void)
{
    int n = get_height();
    for (int i=0;i<n;i++)
    {
        for (int j=n;j>i+1;j--)
        {
            printf(" ");
        }
        for (int m=0;m<i+1;m++)
        {
            printf("#");
        }
        printf("  ");
        for (int z=0;z<i+1;z++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void)
{
    int n;
    do
    {
        n=get_int("Size: ");
    }
    while (n<1||n>8);
    return n;
}
