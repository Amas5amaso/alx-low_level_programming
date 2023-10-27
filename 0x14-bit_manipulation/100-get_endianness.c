#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * @end: check the endianness
 *
 * Return: 0 if bigger
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return (*(char *)&x);
}
