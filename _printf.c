#include "main.h"

/**
  *_printf - display something on the output screen
  *@format: the sring that we are going to print
  *Return: The length og the string
  */
int _printf(const char *format, ...)
{
	int i = 0, j, executed = 0;
	va_list string;
	printer_t funcs[] = {{'c', pr_char}, {'i', pr_int}, {'d', pr_uns},
	{'s', pr_str}, {'%', pr_per}, {'b', pr_bin}};
	va_start(string, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && *format)
	{
		if (*format != '%' && format != NULL && *format)
		{
			_putchar(*format);
			format++;
			i++;
		}
	else if (*format == '%' && format != NULL && *format)
	{
		if (!*(format + 1))
			return (-1);
		format++, j = 0, executed = 0;
		while (funcs[j].symbol)
		{
			if (*format == funcs[j].symbol)
			{
				i += funcs[j].print(string);
				executed = 1;
			}
				j++;
		}
			if (executed == 0)
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
			format++;
		}
	}
	va_end(string);
	return (i);
}
