#include "main.h"
/**
 * _printf- a function that produces output according to a format.
 * @format: parameter.
 * Return: the number of printed characters.
*/

int _printf(const char *format, ...)
{
	int count, temp, count2, d, result, ptr;
	va_list arglist;
	char *s;
	unsigned int u;

	ptr = 0;
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
					d = va_arg(arglist, int);
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
				case 'b':
					u = va_arg(arglist, unsigned int);
					temp = print_bin(u);
					count = count + temp;
					break;
				case 'u':
					u = va_arg(arglist, unsigned int);
					print_unsined(u, &ptr);
					count = count + ptr;
					break;
				case 'o':
					d = va_arg(arglist, int);
					print_base(d, 8, 2, &ptr);
					count = count + ptr;
					break;
				case 'x':
					d = va_arg(arglist, int);
					print_base(d, 16, 1, &ptr);
					count = count + ptr;
					break;
				case 'X':
					d = va_arg(arglist, int);
					print_base(d, 16, 0, &ptr);
					count = count + ptr;
					break;
				case 'S':
					s = va_arg(arglist, char *);
					temp = print_s_custom(s);
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
