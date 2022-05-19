#include "main.h"
/**
 * print_base- a function that prints an integer in its octal
 * or hex format.
 * @num: number to be printed.
 * @base: base of the printed number.
 * @det: a determinant (8 for octal, 16 for hex).
 * @count: a tracker for the number printed.
*/

void print_base(int num, int base, int det, int *count)
{
	int rem;

	if (num == 0)
	{
		return;
	}
	else
	{
		rem = num % base;
		print_base(num / base, base, det, count);
		(*count)++;
		if (base == 16 && rem >= 10 && det == 1)
		{
			_putchar(rem + 55 + 32);
		} else if (base == 16 && rem >= 10 && det == 0)
		{
			_putchar(rem + 55);
		}
		else
		{
			print_dig(rem);
		}
	}
}
