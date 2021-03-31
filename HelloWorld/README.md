# Hello, World

```
#include<stdio.h>
```

This is used to include the [stdio](http://www.cplusplus.com/reference/cstdio/) 
 system header file. This header file lets us use commands for input or output 
 like printf.


```
int main() { ... }
```

This is the main function of the program. No arguments are passed in and it
 expects an integer as the return value. Every program must have a main function.

```
printf("Hello, world!\n");
```

The [printf function](http://www.cplusplus.com/reference/cstdio/printf) prints the 
 text "Hello, world!" to our stdout and follow it with a return escape sequence.


## Compile & Run

compile
```
gcc -o hello hello.c
```

run
```
./hello
```

output
```
Hello, world!
```
