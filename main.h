#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *a  data type corresponding to symbol.
 */
typedef struct printer
{
char symbol;
int (*print)();
} printer_t;
int _putchar(char c);
int _printf(const char *format, ...);
int pr_char(va_list arg);
int pr_int(va_list arg);
int pr_uns(va_list arg);
int pr_str(va_list arg);
int pr_per(void);
int pr_bin(va_list arg);
int return_binary(int d);
#endif
