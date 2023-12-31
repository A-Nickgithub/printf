#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int printed)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed = printf_int(args, printed);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			printed++;
			break;
		case 's':
			printed = printf_strg(args, printed);
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
		case'b':
			printed = printf_binary(va_arg(args, unsigned int), printed);
			break;
		default:
			break;
	}
	return (printed);
}
