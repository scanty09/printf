#include "main.h"

/**
 * printStrings - prints a string followed by a new line
 * @str: pointer to a string
 * Return: 0 on succcess 
*/

int printStrings(va_list, str)
{
	char *string
	int i = 0;

	string = va_arg(str, char *);
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
