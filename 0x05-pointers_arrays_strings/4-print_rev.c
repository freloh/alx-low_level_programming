#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - string in reverse
 * @s: string to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
