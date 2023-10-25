#include "factor_header.h"

/**
 * factorize - Factorize a number and print its prime factors.
 * @numStr: A string representing the number to factorize.
 *
 * Return: 0 if success, -1 if failed
 */

int factorize(char *numStr)
{
	int number = atoi(numStr);

	if (number <= 1)
	{
		printf("Invalid input: Please provide a positive integer.\n");
		return (-1);
	}

	printf("Prime factors of %d:\n", number);

	for (int factor = 2; factor <= number; factor++)
	{
		while (number % factor == 0)
		{
			printf("%d ", factor);
			number /= factor;
		}
	}

	printf("\n");
	return (0);
}
