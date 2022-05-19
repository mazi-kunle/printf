#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _putchar(char s);
int _printf(const char *format, ...);
void print_str(char *s);
int count_str(char *s);
void print_dig(int n);
int count_int(int digit);
int print_bin(unsigned int n);
void print_unsined(unsigned int a, int *count);
void print_base(int num, int base, int det, int *count);
int print_s_custom(char *s);
#endif
