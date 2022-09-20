#include "main.h"
#include <stdio.h>

/**
 * _puts - writes string followed by new line
 * @str: the input string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
