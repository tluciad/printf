#include "main.h"
/**
 *get_op_func - function that selects the type of char
 *@format: string
 *Return: pointer to the string or NULL
 */
int (*get_op_func(const char *format))(va_list)
{
	tp_t type[]{
		{"c", p_char},
		{"s", p_str},
		{"%", p_pc},
		{"d", p_dec},
		{"i", p_int},
		{NULL, NULL}};

	int i = 0;

	while (type[i].tp != NULL)
	{
		if (type[i].tp[0] == *format)
		{
			return (type[i].f);
		}
		i++;
	}
	return (NULL);
}
