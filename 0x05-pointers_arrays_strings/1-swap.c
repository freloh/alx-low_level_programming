#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a : Entry 1
 * @b : Entry 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

