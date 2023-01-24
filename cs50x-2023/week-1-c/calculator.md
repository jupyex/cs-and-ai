# Calculator
We may face the problem of:
- integer overflow
- truncation
	- Solve it by type casting (where we convert datatypes)
- floating-point imprecision
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x=get_long("x: ");
    long y=get_long("y: ");
    printf("%li\n",x+y);
}
```

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x=get_long("x: ");
    long y=get_long("y: ");
    float z=(float)x/(float)y;
    printf("%f\n",z);
}
```

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x=get_long("x: ");
    long y=get_long("y: ");
    double z=(double)x/(double)y;
    printf("%.20f\n",z);
}
```
