#include <cs50.h>
#include <stdio.h>

int get_height(void);
void right_aligned_pyramid(int height);
//void left_aligned_pyramid(int height);

int main(void)
{
    int n = get_height();
    right_aligned_pyramid(n);
    //left_aligned_pyramid(n);
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

void right_aligned_pyramid(int height)
{
    for (int i=height;i>0;i--)
    {
        for (int j=0;j<i-1;j++)
        {
            printf(" ");
        }
        for (int m=0;m<height-i+1;m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
/*
void left_aligned_pyramid(int height)
{
    for (int i=0;i<height;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/
