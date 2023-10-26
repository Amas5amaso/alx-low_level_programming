#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  function that converts a binary
 * number to an unsigned int
 * @b: a character pointer to a string containing binary
 *
 * Return: the converted decimal output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int a;

	sum = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		sum <<= 1;
		if (b[a] == '1')
			sum += 1;
	}
	return (sum);
}
