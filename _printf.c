#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - clone of printf
 * @format: format to be printed
 * Return: 0 if successful
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '\0')
		{
			format++;
			switch (*format)
			{
			case 'c':
			{
				char character = va_args(args, int);
				putchar(character);
				count++;
				break;
			}
			}
		}
	}
}
