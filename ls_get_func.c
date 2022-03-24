#include "main.h"
/**
 *p_char - function that prints a character
 *@arg: the character argument
 */
int p_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * p_str - function that print a string
 * @arg: the string argument
 */
int p_str(va_list arg)
{
	char *st = va_arg(arg, char*);
	int len = 0;

	if (!st)
		st = "(null)";

	while (st[len])
		len++;
	_putchar(st[len]);

	return (len);
}
/**
 * p_prc - function that print a percentage symbol
 * @arg: percentage symbol
 */
int p_prc(va_list arg)
{
	void(arg);
	return ('\%')
}