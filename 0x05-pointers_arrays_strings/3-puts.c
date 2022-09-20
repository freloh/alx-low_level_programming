#include "main.h"

/**
 * _puts - writes string followed by new line
 * @str: the input string
 * Return: void
 */

void _puts(char *str)
{
       for (str = 0; *str != '\0'; str++)
       {
		_putchar(*str);
       }
	_putchar('\n');
}
