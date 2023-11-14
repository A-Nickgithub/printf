#include "main.h"

/**
 * print_unsigned - prints a binary number
 * @num: number of arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int print_unsigned(unsigned int num, int printed)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		char unsigned_str[11];
		int a = 0;

		while (num != 0)
		{
			unsigned_str[a] = (num % 10) + '0';
			num /= 10;
			a++;
		}
		for (a = digits - 1; a >= 0; a--)
		{
			_putchar(unsigned_str[a]);
			printed++;
		}
	}
	return (printed);
}
