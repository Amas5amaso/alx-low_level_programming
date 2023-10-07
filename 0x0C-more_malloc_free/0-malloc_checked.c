#include <stdlib.h>
#include "main.h"

/**
 * malloc_check - allocate memory using malloc
 * @b: input int
 *
 * Return: void
 */

void *malloc_check(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
