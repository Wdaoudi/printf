#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbrbase(long n, char *base);
long ft_strlen(char *str);
int ft_putptrbase(unsigned long n, char *base);

int main()
{
    size_t  t;
    ft_printf("6.%p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
    ft_printf("7.%p %p \n", (void*)INT_MIN, (void*)INT_MAX);
    ft_printf("8.%p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
    ft_printf("9.%p %p \n", (void*)0, (void*)0);

    t = printf("6.%p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
    printf("%zu\n", t);
    t = printf("7.%p %p \n", (void*)INT_MIN, (void*)INT_MAX);
    printf("%zu\n", t);
    t = printf("8.%p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
    printf("%zu\n", t);   
    t = printf("9.%p %p \n", (void*)0, (void*)0);
    printf("%zu\n", t);
    return 0;
}