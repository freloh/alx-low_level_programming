#include <stdio.h>
/**
 * main - prints out first 98
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
	int inc;
	unsigned long n = 1, m = 2, o;

	for (inc = 0; inc < 98; inc++)
	{
		o = n + m;
		printf("%lu", o);
		n = o;
		m = o;

		if (inc == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
