#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list *arg);
int print_string(va_list *arg);
int print_int(va_list *arg);
int print_unsigned(va_list *arg);
int print_bin(va_list *arg);
int print_S(va_list *arg);
int print_rev(va_list *arg);
int print_octal(va_list *arg);
int print_percent(va_list *arg);
int print_hex(va_list *arg);
int print_HEX(va_list *arg);

/*helper functions*/
void print_base(unsigned int num, int base, int det, int *count);
void print_dig(int n);
int _putchar(char c);
int count_int(int digit);
void print_unsined(unsigned int n, int *count);
void print_str(char *s);

/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

typedef struct code_format
{
	char sc;
	int (*f)(va_list *arg);
} code_f;

#endif
