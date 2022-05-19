#include "main.h"
/**
 * _printf- a function that produces output according to a format.
 * @format: parameter.
 * Return: the number of printed characters.
*/

int _printf(const char *format, ...)
{
	int count, temp, count2, d;
	int result;
	va_list arglist;
	char *s;

	va_start(arglist, format);
	count = 0;
	count2 = 0;
	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arglist, int));
					count = count + 1;
					break;
				case 's':
					s = va_arg(arglist, char *);
					print_str(s);
					temp = count_str(s);
					count = count + temp;
					break;
				case 'd':
					s = va_arg(arglist, char *);
					print_dig(d);
					temp = count_int(d);
					count = count + temp;
					break;
				case 'i':
					d = va_arg(arglist, int);
					print_dig(d);
					temp = count_int(d);
					count = count + temp;
					break;
			}
		}
		else
		{
			count2++;
			_putchar(*format);
		}
		format++;
	}
	va_end(arglist);
	result = count + count2;
	return (result);
}
