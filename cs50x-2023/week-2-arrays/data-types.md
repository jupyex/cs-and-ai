# Data Types
Original code: (You'd get a format error)
```c
#include <stdio.h>

int main(void)
{
    int score1=72;
    int score2=73;
    int score3=33;
    
    printf("Average: %f\n",(score1+score2+score3)/3);
}
```
First solution:
```c
#include <stdio.h>

int main(void)
{
    int score1=72;
    int score2=73;
    int score3=33;
    
    printf("Average: %f\n",(score1+score2+score3)/3.0);
}
```
Second solution:
```c
#include <stdio.h>

int main(void)
{
    int score1=72;
    int score2=73;
    int score3=33;
    
    printf("Average: %f\n",(score1+score2+score3)/(float)3);
}
```
