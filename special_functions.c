#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_S- a fucntion.
 * @arg: parameter.
 * Return: count.
*/

int print_S(va_list *arg)
{
	int count = 0, i = 0;
	char *str = va_arg(*arg, char *);
	char c;

	if (str == NULL || *str == '\0')
		return (0);
	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar('0');
			count += _printf("%X", (unsigned int) c);
		}
		else
		{
			count += _putchar(c);
		}
		i++;
	}
	return (count);
}

/**
 * print_octal- a function.
 * @arg: parameter.
 * Return: count.
*/
int print_octal(va_list *arg)
{
	unsigned int len, pow, j, digit, n, num;
	int count = 0;

	n = va_arg(*arg, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		pow = 1;
		for (j = 1; j <= len - 1; j++)
			pow *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow;
			_putchar(digit + '0');
			count++;
			n -= (digit * pow);
			pow /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/**
* print_HEXnhex - a function
* @n: unsigned int to print
* @c: flag to determine case of printing (0 = lower, 1 = upper)
*
* Return: number of digits printed
*/

int print_HEXnhex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_hex- a function.
 * @x: parameter.
 * Return: count.
*/

int print_hex(va_list x)
{
	return (print_HEXnhex(va_arg(x, unsigned int), 0));
}

/**
 * print_HEX- a function.
 * @X: paramter.
 * Return: int.
*/

int print_HEX(va_list X)
{
	return (print_HEXnhex(va_arg(X, unsigned int), 1));
}
