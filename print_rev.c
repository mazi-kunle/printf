#include <stdlib.h>
#include "main.h"

/**
 * print_rev - prints reverse of string
 * @r: string to be reversed
 * Return: size
 */

int print_rev(va_list r)
{
	char *st, *start, *end, temp; 
	int i, count;

	st = va_arg(r, char *);
	end = st;
	start  = st;
	i = 0;
	count = 0;
	if (st == NULL)
		st = "(null)";
	while (*end)
	{
		count++;
		end++;
	}
	end--;
	while (i < count / 2)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		i++;
	}
	print_str(st);
	return (count);
}
