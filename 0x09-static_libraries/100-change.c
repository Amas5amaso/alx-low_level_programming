#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coin to make
 * @argc: number of command line
 * @argv: array that hold the command line
 *
 * Return: 0 when successful
 */

int main(int argc, char **argv)
{
	int cents, mncoin = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
	if (cents >= 25)
	cents -= 25;
	if (cents >= 10)
	cents -= 10;
	if (cents >= 5)
	cents -= 5;
	if (cents >= 2)
	cents -= 2;
	if (cents >= 1)
	cents -= 1;
	mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}