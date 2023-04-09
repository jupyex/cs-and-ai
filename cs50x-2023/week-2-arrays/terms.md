# Terms
In CS50, we're using Clang as our compiler.
```
make hello
```
The above command corresponds to writing
```
clang -o hello hello.c
```
You might be met with an error if you have `#include <cs50.h>` in your code. To solve the error, you have to add `-lcs50` to the above command:
```
clang -o hello hello.c -lcs50
```

## Compiling Process
- Preprocessing
```c
#include <stdio.h>

int main(void)
{
	printf("hello");
}
```
The above code corresponds to writing
```c
int printf(string format,...)

int main(void)
{
	printf("hello");
}
```
- Compiling: Turns your code into assembly code.
- Assembling: Turns the assembly code into machine code (0s and 1s)
- Linking: Combining your code and the code that authors of the programming language, in this case, C, wrote
