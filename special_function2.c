#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_char- function.
 * @arg: parameter.
 * Return: count.
*/
int print_char(va_list *arg)
{
	char a;

	a = va_arg(*arg, int);
	_putchar(a);
	return (1);
}

/**
 * print_string- function.
 * @arg: parameter.
 * Return: count.
*/
int print_string(va_list *arg)
{
	char *s;
	int count;

	s = va_arg(*arg, char *);
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

int print_int(va_list *arg)
{
	int n, count;

	n = va_arg(*arg, int);
	count = count_int(n);
	print_dig(n);
	return (count);
}

/**
 * print_unsigned- a function.
 * @arg: parameter.
 * Return: count.
*/

int print_unsigned(va_list *arg)
{
	unsigned int d;
	int count;

	d = va_arg(*arg, unsigned int);
	count = 0;
	print_unsined(d, &count);
	return (count);
}
/**
 * print_bin- a function.
 * @arg: paramter.
 * Return: count.
*/

int print_bin(va_list *arg)
{
	unsigned int n;
	int count;
	char s[50];

	n = va_arg(*arg, unsigned int);
	itoa(n, s, 2);
	count = strlen(s);
	return (count);
}
