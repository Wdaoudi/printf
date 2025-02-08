ft_printf
A custom implementation of the printf function from the C standard library. This project is part of the 42 school curriculum.
Description
ft_printf is a simplified recreation of the standard C library function printf(). It handles various format specifiers and provides basic string formatting capabilities. This implementation focuses on core functionality without buffer management.
Features
Supported Format Specifiers

%c - Print a single character
%s - Print a string
%p - Print a pointer in hexadecimal format
%d - Print a decimal (base 10) number
%i - Print an integer in base 10
%u - Print an unsigned decimal number
%x - Print a number in hexadecimal (base 16) lowercase format
%X - Print a number in hexadecimal (base 16) uppercase format
%% - Print a percent sign

Getting Started
Prerequisites

GCC compiler
Make

Installation

Clone the repository:

bashCopygit clone https://github.com/Wdaoudi/ft_printf.git
cd ft_printf

Compile the library:

bashCopymake
This will create libftprintf.a in the root directory.
Usage

Include the header in your C file:

#include "ft_printf.h"

When compiling your program, link with the library:

bashCopygcc your_program.c -L. -lftprintf

Example usage:

#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
Return Value
The function returns the number of characters printed, or -1 if an error occurs.
Project Structure

ft_printf.c - Main printf implementation
ft_printf.h - Header file with function prototypes
write.c - Basic writing functions
write2.c - Additional writing functions

Author

@Wdaoudi
