#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct op
{
	char *op;
	int (*f)(va_list valist);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
