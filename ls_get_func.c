#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *pnchar - function that prints a character
 *@arg: the character argument
 *Return: 0
 */
int pnchar(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * pnstr - function that print a string
 * @arg: the string argument
 * Return: 0
 */
int pnstr(va_list arg)
{
	char *st = va_arg(arg, char *);
	int len = 0;

	if (!st)
		st = "(null)";

	while (st[len])
		len++;
	_putchar(st[len]);

	return (len);
}
/**
 * pnprc - function that print a percentage symbol
 * @arg: percentage symbol
 * Return: 0
 */
int pnprc(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}
