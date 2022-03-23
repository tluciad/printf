#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct print - Estruct
 *@tp: format
 *@f: function
 */
typedef struct print
{
	char *tp;
	int (*f)(va_list valist);
} p_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
