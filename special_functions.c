#include "main.h"
/**
 * print_char- function.
 * @arg: parameter.
 * Return: count.
*/
int print_char(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	_putchar(a);
	return (1);
}

/**
 * print_string- function.
 * @arg: parameter.
 * Return: count.
*/
int print_string(va_list arg)
{
	char *s;
	int count;

	s = va_arg(arg, char *);
	count = 0;
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}

/**
 * print_int- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_int(va_list arg)
{
	int n, count;

	n = va_arg(arg, int);
	count = count_int(n);
	print_dig(n);
	return (count);
}

/**
 * print_unsigned- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_unsigned(va_list arg)
{
	unsigned int d;
	int count;

	d = va_arg(arg, unsigned int);
	count = 0;
	print_unsined(d, &count);
	return (count);
}

/**
 * print_bin- a function.
 * @arg: paramter.
 * Return: count.
*/

int print_bin(va_list arg)
{
	unsigned int n;
	unsigned long bin;
	int rem, i, count;

	n = va_arg(arg, unsigned int);
	bin = 0;
	i = 1;
	count = 0;

	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		bin = bin + (rem * i);
		count++;
		i = i * 10;
	}
	print_dig(bin);
	return (count);
}

/**
 * print_S- a fucntion.
 * @arg: parameter.
 * Return: count.
*/

int print_S(va_list arg)
{
	char *s;
	int count, i;

	s = va_arg(arg, char *);
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

/**
 * print_rev- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_rev(va_list arg)
{
	char *temp, *end;
	int i, count;

	temp = va_arg(arg, char *);
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
 * @arg: parameer.
 * Return: count.
*/
int print_octal(va_list arg)
{
	unsigned int d;
	int count;

	d = va_arg(arg, unsigned int);
	count = 0;
	print_base(d, 8, 2, &count);
	return (count);
}

/**
 * print_hex- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_hex(va_list arg)
{
	unsigned int d;
	int count;

	d = va_arg(arg, unsigned int);
	count = 0;
	print_base(d, 16, 1, &count);
	return (count);
}

/**
 * print_HEX- a function.
 * @arg: paramter.
 * Return: int.
*/

int print_HEX(va_list arg)
{
	unsigned int d;
	int count;

	d = va_arg(arg, unsigned int);
	count = 0;
	print_base(d, 16, 0, &count);
	return (count);
}
