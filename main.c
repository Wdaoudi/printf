#include "libftprintf.h"

int	main(void)
{
	// Test character printing
	char c = 'A';
	printf("Original printf: %c\n", c);
	ft_printf("ft_printf: %c\n", c);

	// Test string printing
	char *str = "Hello, world!";
	printf("Original printf: %s\n", str);
	ft_printf("ft_printf: %s\n", str);

	// // Test pointer printing
	// void *ptr = (void *)0x12345678;
	// printf("Original printf: %p\n", ptr);
	// ft_printf("ft_printf: %p\n", ptr);

	// // Test decimal printing
	// int d = 42;
	// printf("Original printf: %d\n", d);
	// ft_printf("ft_printf: %d\n", d);

	// // Test integer printing
	// int i = -42;
	// printf("Original printf: %i\n", i);
	// ft_printf("ft_printf: %i\n", i);

	// // Test unsigned printing
	// unsigned int u = 42;
	// printf("Original printf: %u\n", u);
	// ft_printf("ft_printf: %u\n", u);

	// // Test hexadecimal (lowercase) printing
	// unsigned int x = 10;
	// printf("Original printf: %x\n", x);
	// ft_printf("ft_printf: %x\n", x);

	// // Test hexadecimal (uppercase) printing
	// printf("Original printf: %X\n", x);
	// ft_printf("ft_printf: %X\n", x);

	// // Test percent sign printing
	// printf("Original printf: %%\n");
	// ft_printf("ft_printf: %%\n");

	return (0);
}