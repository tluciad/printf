#include "main.h"

/**
 * _printf - function that print accord the format
 *@format: string to print
 *
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i = 0, j = 0;
	int (*f)(va_list);

	if (!format || !*format)
		return (-1);

	va_start(arg, format);
	while (format[j])
		j++;
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] != '%' && format[j] != 'd' 
			&& format[j] != 'i' && format[j] != 'c' 
			&& format[j] != 's')
			{
				if (format[j - 1] == '%' && format[j] == '\0')
					return (-1);

				i = i + _putchar(format[j - 1]);
				i = i + _putchar(format[j]);
			}
			else
			{
				f = get_func(&format[j]);
				i = i + f(arg);
			}
		}
		else
		{
			_putchar(format[j]);
			i++;
		}
	}
	va_end(arg);
	return (i);
}
