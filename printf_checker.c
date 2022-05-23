#include "main.h"
/**
 * printf_helper- a function.
 * @format: parameter.
 * @count: parameter.
 * @func_list: parameter.
 * @arg: paramieter.
 * Return: int.
*/

void printf_helper(const char *format, code_f func_list[], int *count,
		va_list *arg)
{
	int i, temp, flag;

	flag = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; func_list[i].sc; i++)
			{
				if (*format == func_list[i].sc)
				{
					temp = func_list[i].f(arg);
					*count = *count + temp;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				_putchar(*format);
				*count = *count + 1;
			}
		}
		else
		{
			_putchar(*format);
			*count = *count + 1;
		}
		format++;
	}
}
