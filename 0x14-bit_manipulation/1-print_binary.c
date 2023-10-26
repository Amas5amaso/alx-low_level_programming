#include "main.h"

/**
 * _pow - function that calculates base ^ power
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of the base ^ power
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int y;
	unsigned long int x;

	y = 1;
	for (x = 1; x <= power; x++)
		y *= base;
	return (y);
}

/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, cent;
	char fals;

	fals = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		cent = n & divisor;
		if (cent == divisor)
		{
			fals = 1;
			_putchar('1');
		}
		else if (fals == 1 || divisor == 1)
		{
			_putchar('1');
		}
		divisor >>= 1;
	}
}
