#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints random number to variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}