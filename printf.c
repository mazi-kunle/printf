#include "main.h"
/**
 * _printf- a function that produces output according to a format.
 * @format: parameter.
 * Return: the number of printed characters.
*/
int _printf(const char *format, ...)
{
	int count, i, temp;
	va_list arg;
	code_f func_list[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'r', print_rev},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'\0', '\0'}
	};

	va_start(arg, format);
	temp = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i = 0;
			format++;
			while (func_list[i].sc != '\0')
			{
				if (*format == func_list[i].sc)
				{
					temp = func_list[i].f(&arg);
					count = count + temp;
				}
				i++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
