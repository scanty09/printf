#include "main.h"

/**
 * printCharacters - function that prints character
 * @charac: arguments to be passed
 * Return: 0 on success
 */

int printCharacters(va_list, charac)
{
	char character;

	character = va_arg(charac, int);
	_putchar(character);

	return (0);
}
