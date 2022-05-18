#include "main.h"
/**
 * _putchar- a function that prints a character to the
 * standard output.
 * @c: parameter.
 * Return: 1 if successful.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
