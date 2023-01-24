# Mario
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get size of grid
    int n;
    do
    {
        n=get_int("Size: ");
    }
    while (n<1);

    // Print a grid of bricks
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

```c
#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

//Note: int represents the data type that the function returns
//Note: void means that we are not getting any input
int get_size(void){
    int n;
    do
    {
        n=get_int("Size: ");
    }
    while (n<1);
    return n;
}

void print_grid(int size)
{
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
