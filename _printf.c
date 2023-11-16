#include "main.h"

/**
 * _printf - function to print character
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count_string, count = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if	(format[i] == '%'  && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			count_string = _puts(va_arg(args, char *));
			i++;
			count += count_string;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'r')
		{
			_putchar('%');
		}
	}
	va_end(args);
	return (count);
}
