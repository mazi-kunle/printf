#include "main.h"
/**
 * print_str- a function that prints strings.
 * @s: parameter.
*/

void print_str(char *s)
{
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * count_str- a function that counts a string.
 * @s: parameter.
 * Return: int.
*/

int count_str(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * print_s_custom- a string custom function.
 * @s: string.
 * Return: string count.
*/

int print_s_custom(char *s)
{
	int count, i;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		if ((s[i] < 0 || s[i] < 32 || s[i] >= 127))
		{
			_putchar('\\');
			count++;
			_putchar('x');
			count++;
			_putchar(0 + '0');
			count++;
			print_base(s[i], 16, 0, &count);
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
