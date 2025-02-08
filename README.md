# ft_printf

<div align="center">
  <img src="https://img.shields.io/badge/norminette-passing-success"/>
  <img src="https://img.shields.io/badge/42-project-000000"/>
</div>

## 💡 About

> This project consists of coding a library that contains a simplified version of the printf function.

My implementation of the printf function from the C standard library. This is a project done as part of the 42 school cursus.

## 🛠️ Usage

### Requirements

The function is written in C language and needs the `gcc` compiler and some standard C libraries to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ git clone https://github.com/Wdaoudi/ft_printf
$ cd ft_printf
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```c
#include "ft_printf.h"
```

## 📋 Supported Conversions

The function supports the following conversions:

| Conversion | Description |
|------------|-------------|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address |
| `%d` | Decimal (base 10) |
| `%i` | Integer (base 10) |
| `%u` | Unsigned decimal |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Percentage sign |

## 📊 Testing

You can test the function with:

```shell
gcc -Wall -Wextra -Werror main.c libftprintf.a && ./a.out
```

Example main function:

```c
int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Pointer: %p\n", (void *)0x123456);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("HEXADECIMAL: %X\n", 255);
    ft_printf("Percentage: %%\n");
    return (0);
}
```
