#include "main.h"

/**
 *pr_bin- a function that prints a character
 *@arg: the charcter
 *Return: number decimal number in binary
 */
int pr_bin(va_list arg)
{
	int d = va_arg(arg, int);
	int i = 0;
	if (d < 0)
	{
		return (-1);
	}
	else if (d == 0)
	{
		_putchar(0 + '0');
		_putchar(0 + '0');
	}
	else
		i += return_binary(d);
	return (i);
}

/**
 *return_binary- a function that prints a character
 *@d: the charcter
 *Return: number decimal number in binary
 */

int return_binary(int d)
{
	int i = 0;
	if (d == 1)
	{
		_putchar(d + '0');
		return (1);
	}
	else if (d > 1)
	{
		i += return_binary(d / 2);
		_putchar(d % 2 + '0');
	}
	return (i);
}
