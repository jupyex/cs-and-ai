# Command Line Arguments
## greet.c
```c
#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[])
{
    printf("Hello, ");
    if (argc!=1)
    {
        for (int i=0, n=argc-1;i<n;i++)
        {
            printf("%s ",argv[i+1]);
        }
    }
    else
    {
        printf("world");
    }
    printf("\n");
}
```

In CMD, type
```
make greet
./greet
./greet IA
./greet infinity Aspirations
```

## cowsay
Type this in CMD
```
cowsay i love you.
```
Other animals
```
cowsay -f sheep mehhh
```
