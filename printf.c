#include "main.h"
/**
 * _printf- a function that produces output according to a format.
 * @format: parameter.
 * Return: the number of printed characters.
*/

int _printf(const char *format, ...)
{
	int count, temp, count2;
	va_list arglist;
	char *s;

	va_start(arglist, format);
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
					temp = count_tr(s);
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
	return (count + count2);
}