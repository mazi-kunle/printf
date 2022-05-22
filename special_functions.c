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
	char *s;
	int i = 0;

	s = va_arg(*arg, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
	/*
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
	*/
}

/**
 * print_rev- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_rev(va_list *arg)
{
	char *temp, *end;
	int i, count;

	temp = va_arg(*arg, char *);
	end = temp;
	count = 0;
	while (*end)
	{
		count++;
		end++;
	}
	if (temp != NULL)
	{
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(temp[i]);
		}
		_putchar('\0');
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
	/*unsigned int d;
	int count;

	d = va_arg(*arg, unsigned int);
	count = 0;
	print_base(d, 8, 2, &count);
	return (count);*/
}
	

/**
 * print_hex- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_hex(va_list *arg)
{
	unsigned int d;
	int count;

	d = va_arg(*arg, unsigned int);
	count = 0;
	print_base(d, 16, 1, &count);
	return (count);
}

/**
 * print_HEX- a function.
 * @arg: paramter.
 * Return: int.
*/

int print_HEX(va_list *arg)
{
	unsigned int d;
	int count;

	d = va_arg(*arg, unsigned int);
	count = 0;
	print_base(d, 16, 0, &count);
	return (count);
}
