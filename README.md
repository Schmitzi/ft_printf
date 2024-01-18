<p align="center">
    <img src="img/ft_printfe.png"/>
</p>

<h1 align="center">
   ft_printf
</h1>

<p align="center">
    <img src="https://img.shields.io/badge/language-%20C-blue" />
    <img src="https://img.shields.io/badge/100%2F100-green" />
</p>

# ft_printf
## Description

ft_printf is a custom implementation of the printf function in the C programming language. It provides a flexible and extensible way to format and print output to the standard output (stdout) or a specified file descriptor.

## Features

Supports a wide range of format specifiers, including %c, %s, %d, %i, %u, %x, %X, %p, %f, and more.
Precision and width specifiers for precise control over output formatting.

## Usage
### Compilation

To compile the ft_printf library, you can use the provided Makefile. Simply run:

```bash
make
```

This will generate the ft_printf.a library.
Integration

To use ft_printf in your project, include the header file in your source code:

```c
#include "ft_printf.h"
```

Link your project with the compiled library:

```bash
gcc -o your_program your_source.c -L. -lft_printf
```

### Example

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
```
