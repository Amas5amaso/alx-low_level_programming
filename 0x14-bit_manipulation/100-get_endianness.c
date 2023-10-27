#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if small
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return (*(char *)&x);
}
