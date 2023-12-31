#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>	
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int printf_binary(unsigned int num, int printed);
int printf_ch(va_list args, int printed);
int printf_strg(va_list args, int printed);
int printf_modulus(void);
int printf_int(va_list args, int printed);
int printf_decimal(va_list args);
int selector(const char *format, va_list args, int printed);
int print_unsigned(unsigned int num, int printed);
#endif
