#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers and seperates with commas
 *
 * Return: Always (Success)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
