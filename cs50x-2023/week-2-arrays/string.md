# Strings

- When you store a string in memory, the number of bytes used = `1*n+1` where `n` represents the number of characters and the `1` comes from `\0` added by C in strings.
```c
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n",c1,c2,c3);
}
```
Showing ASCII:
```c
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n",c1,c2,c3);
}
```

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%s\n",s);
}
```

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%c%c%c\n",s[0],s[1],s[2]);
}
```
Showing ASCII with the last NUL value:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%i %i %i %i\n",s[0],s[1],s[2],s[3]);
}
```
Manually,
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2];
    words[0]="HI!";
    words[1]="BYE!";

    printf("%c%c%c\n",words[0][0],words[0][1],words[0][2]);
    printf("%c%c%c%c\n",words[1][0],words[1][1],words[1][2],words[1][3]);

}
```
Mine:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2];
    words[0]="HI!";
    words[1]="BYE!";

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%c",words[i][j]);
        }
        printf("\n");
    }
}
```
Finding length of string:
```c
#include<cs50.h>
#include<stdio.h>

int main(void)
{

    string name = get_string("What's your name? ");

    int n = 0;
    
    while (name[n]!='\0')
    {
        n++;
    }
    printf("%i\n",n);
}
```
This can be achieved by using the `<string.h>`
```c
#include<string.h>
#include<cs50.h>
#include<stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int n = strlen(name);

    printf("%i\n",n);
}
```
Converting lowercase to uppercase:
```c
#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
            printf("%c",s[i]);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}
```
Another method using `ctype.h`
```c
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n;i++)
    {
        printf("%c",toupper(s[i]));
    }
    printf("\n");
}
```
