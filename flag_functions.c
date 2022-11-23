#include "main.h"

/**
 *pr_char- a function that prints a character
 *@arg: the charcter
 *Return: number of character
 */
int pr_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}


/**
 *pr_int- A function that prints integer
 *@arg: The integer
 *Return: number of integer
 */
int pr_int(va_list arg)
{
	int d = va_arg(arg, int);
	int number;
	int lastdigit = d % 10;
	int one_dig;
	int mult = 1;
	int i = 1;

	d = d / 10;
	number = d;

	if (lastdigit < 0)
	{
		_putchar('-');
		number = -number;
		d = -d;
		lastdigit = -lastdigit;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			mult = mult * 10;
			number = number / 10;
		}
		number = d;
		while (mult > 0)
		{
			one_dig = number / mult;
			_putchar(one_dig + '0');
			number = number - (one_dig * mult);
			mult = mult / 10;
			i++;
		}
	}
	_putchar(lastdigit + '0');

	return (i);
}


/**
 *pr_uns- A function that prints a real number
 *@arg: the float number
 *Return: number of unsigned integer
 */
int pr_uns(va_list arg)
{
	int d = va_arg(arg, int);
	int number;
	int lastdigit = d % 10;
	int one_dig;
	int mult = 1;
	int i = 1;

	d = d / 10;
	number = d;

	if (lastdigit < 0)
	{
		_putchar('-');
		number = -number;
		d = -d;
		lastdigit = -lastdigit;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			mult = mult * 10;
			number = number / 10;
		}
		number = d;
		while (mult > 0)
		{
			one_dig = number / mult;
			_putchar(one_dig + '0');
			number = number - (one_dig * mult);
			mult = mult / 10;
			i++;
		}
	}
	_putchar(lastdigit + '0');

	return (i);
}


/**
 *pr_str- A function that prints a string
 *@arg:The string
 *Return: number of strings
 */
int pr_str(va_list arg)
{
	char *s;
	int i = 0;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 *pr_per- A function that prints a %
 *Return: 1
 */
int pr_per(void)
{
	_putchar('%');
	return (1);
}
