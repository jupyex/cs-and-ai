#include <stdio.h>

int main(void)
{
    int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
    int temp, min, min_idx;

    for (int i = 0; i < 8; i++)
    {
        min = numbers[i];
        for (int j = i + 1; j < 8; j++)
        {
            if (numbers[j] < min)
            {
                min = numbers[j];
                min_idx = j;
            }
        }
        temp = numbers[i];
        numbers[i] = min;
        numbers[min_idx] = temp;
    }

    for (int z = 0; z < 8; z++)
    {
        printf("%d\n", numbers[z]);
    }
}
