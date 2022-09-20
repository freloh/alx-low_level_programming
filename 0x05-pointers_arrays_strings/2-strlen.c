#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: the input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++);

	return (len);
}
