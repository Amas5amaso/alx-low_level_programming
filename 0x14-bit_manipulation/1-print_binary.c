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
	int bit = sizeof(n) * 8;
	print = 0;

	while (bite)
	{
		if (n & 1l << --bit)
		{
			-putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
