# Arrays
```c
#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0]=72;
    scores[1]=73;
    scores[2]=33;
    
    printf("Average: %f\n",(scores[0]+scores[1]+scores[2])/(float)3);
}
```
If I want to get 3 scores by input:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];
    for (int i=0;i<3;i++)
    {
        scores[i]=get_int("Score: ");
    }
    printf("Average: %f\n",(scores[0]+scores[1]+scores[2])/(float)3);
}
```
With average function,
```c
#include <cs50.h>
#include <stdio.h>

const int N=3;

float average(int array[]);

int main(void)
{
    int scores[N];
    for (int i=0;i<N;i++)
    {
        scores[i]=get_int("Score: ");
    }
    printf("Average: %f\n",average(scores));
}

float average(int array[])
{
    int sum=0;
    for (int i=0;i<N;i++)
    {
        sum+=array[i];
    }
    return sum/(float)N;
}
```
