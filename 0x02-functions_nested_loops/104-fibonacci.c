#include <stdio.h>
/**
 * main - prints out first 98
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
	int inc;
	unsigned long n, m, o;

	for (inc = 0; inc < 98; inc++)
	{
		o = n + m;
		printf("%lu", o);
		n = o - 1;
		m = o - 2;

		if (inc == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
