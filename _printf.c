#include "main.h"
/**
 * _printf - is a function that selects the correct function to print
 * @format: identifier to look for.
 * Return: the lenth of the string.
 */
int _printf(const char *format, ...)
{
	int i = 0, j, len = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
}
