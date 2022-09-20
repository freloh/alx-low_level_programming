#include "main.h"

/**
 * _puts - writes string followed by new line
 * @str: the input string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
