#include "main.h"

/**
 * _puts - prints string
 * @s: string to be printed
 *
 * Return: number of byte
 */

int _puts(char *s)
{
	int count = 0;

	if (s)
	{
		for (count = 0; s[count] != '\0'; count++)
		{
			_putchar(s[count]);
		}
	}
	return (count);
}
