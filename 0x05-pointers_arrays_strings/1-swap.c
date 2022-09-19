#include "main.h"

/**
 * main - swaps the values of two integers
 * @p : 1 pointer
 * @q : 2 pointer
 * Return: void
 */

void swap_int(int *p, int *q)

{

	int x = *p;
	*p = *q;
	*q = x;

}
