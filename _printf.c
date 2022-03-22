#include "main.h"

/**
 * _printf - Start function for printf project
 * @format: String to print with formatting options
 * Return: -1 on failure, lenght of printed string otherwise
 */

int _printf(char *format, ...)
{
	int i = 0;
	size_t print_len = 0;
	va_list ap;
	char buffer[2048];
	int (*convfun)(va_list, char *, int);

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
			|| (format[0] == '\\' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			buffer[print_len] = format[i];
			print_len += 1;
		}
		else
		{
			convfun = get_print_cases(&(format[i + 1]));
			if (convfun != NULL)
			{
				print_len = convfun(ap, &buffer[print_len], print_len);
				i++;
			}
			else
			{
				buffer[print_len] = format[i];
				print_len += 1;
			}
		}
		i++;
	}
	write(1, buffer, print_len);
	va_end(ap);
	return (print_len);
}
