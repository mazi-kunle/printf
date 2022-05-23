#include "main.h"
#include <string.h>
/**
 * _printf- a function that produces output according to a format.
 * @format: parameter.
 * Return: the number of printed characters.
*/
int _printf(const char *format, ...)
{
	int count;
	va_list arg;
	code_f func_list[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
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
	count = 0;
	if (format == NULL || (format[0] == '%' && strlen(format) == 1))
	{
		return (0);
	}
	printf_helper(format, func_list, &count, &arg);
	va_end(arg);
	return (count);
}
