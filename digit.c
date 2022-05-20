#include "main.h"
/**
 * print_dig- a function that prints an integer.
 * @n: integer to be printed.
*/

void print_dig(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_dig(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * count_int- a function that counts the number of  digits.
 * @n: digit to be counted.
 * Return: the count.
*/

int count_int(int n)
{
	int count;

	count = 0;
	if (n == 0)
	{
		count = 1;
		return (count);
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/**
 * print_unsined- a function that prints an integer in its hex format.
 * @n: integer to be printed.
 * @count: a tracker for the number of characters printed.
 * Return: count.
*/

void print_unsined(unsigned int n, int *count)
{
	(*count)++;
	if (n / 10)
	{
		print_unsined(n / 10, count);
	}
	_putchar(n % 10 + '0');
}


