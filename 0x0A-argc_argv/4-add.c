#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function to print it name
 * @argc: argc parameter
 * @argv: argv an array of a command
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j;


	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)

			if (!isdigit(argv[i][j]))
			printf("Error\n");
			return (1);
	}
	for (i = 0; i < argc; i++)
		return (0);
}
