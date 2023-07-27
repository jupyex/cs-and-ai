# Recursion
## Iteration
```c
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

## Recursion
My Solution
```c
#include <cs50.h>
#include <stdio.h>

void draw(int n, int j);

int main(void)
{
    int height = get_int("Height: ");
    draw(1, height);
}

void draw(int n, int j)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    
    if (n < j)
    {
        draw(n + 1, j);
    }
}
```
His solution:
```c
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    // Get height of pyramid
    int height = get_int("Height: ");
    // Draw pyramid
    draw(height);
}

void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    // Draw pyramid of height n - 1
    draw(n - 1);
    
    // Draw one more row of width n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
```
