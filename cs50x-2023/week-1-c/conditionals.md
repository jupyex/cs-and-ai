# Conditionals
## Comparing two numbers
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x=get_int("What is x? ");
    int y=get_int("What is y? ");
    if(x<y)
    {
        printf("x is less than y\n");
    }
    else if(x>y)
    {
        printf("x is greater than y\n");
    }
    else{
        printf("x equals y\n");
    }
}
```

## Agree
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c=='y' || c=='Y')
    {
        printf("Agreed.\n");
    }
    else if (c=='n' || c=='N')
    {
        printf("Not agreed.\n");
    }
}
```
