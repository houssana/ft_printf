#include <stdio.h>
#include "libft/libft.h"

void foo(char *fmt, ...);

int ft_printf(const char * restrict format, ...)
{
	while (*format)
	{
		if (*format != '%')	
			ft_putchar(*format);
		else if (format[1] == '%')
			ft_putchar(*format++);
		else
			ft_putnbr(ft_atoi(&format[1]));
		format++;
	}
}

int main(int argc, char **argv)
{
	foo("d s", 42, "comment ca va ?");
	printf("%d\n", printf("%3$ 05d%%d\n", "12345678", "9", 4));
	ft_printf("bonjour %\n2.4s%%%\n");
}
