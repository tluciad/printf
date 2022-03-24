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
	char *t;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int pnchar(va_list arg);
int pnstr(va_list arg);
int pnprc(va_list arg);
int (*get_func(const char *format))(va_list);

#endif
