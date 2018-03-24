#include <stdio.h>
void foo(char *fmt, ...);

int ft_printf(const char * restrict format, ...)
{
	while (*format)
	{
		if (*format != '%')	
			ft_putchar(*format);
		format++;
	}
}

int main(int argc, char **argv)
{
	foo("d s", 42, "comment ca va ?");
	printf("%d\n", printf("%2$0-5s%%d\n", "12345678", "9"));
	ft_printf("bonjour %s\n");
}
