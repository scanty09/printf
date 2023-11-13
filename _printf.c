#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - clone of printf
 * @format: format to be printed
 *
 * Return: 0 if successful
 */


int _printf(const char format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		}

		switch (*format)
		{
		case 'c': {
			char character = va_arg(args, int);
			putchar(character);
			count++;
			break;
		}
		case 's': {
			char *str = va_arg(args, char);
			while (*str != '\0')
			{
				putchar(*str);
				str++;
				count++;
			}
			break;
		}
		case '%':
			putchar('%');
			count++;
			break;
		default:
			putchar('%');
			count++;
			break;
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
