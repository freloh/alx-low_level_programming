#include "main.h"

/**
 * main - swaps the values of two integers
 * @a : 1 pointer
 * @b : 2 pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
