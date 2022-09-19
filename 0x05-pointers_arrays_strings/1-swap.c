#include "main.h"

/**
 * main - swaps the values of two integers
 * @p : 1 pointer
 * @q : 2 pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
