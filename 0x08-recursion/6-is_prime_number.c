#include "main.h"
/**
 * helperfunction - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @num: number being checked
 * @i: possible factor of the number
 *
 * Return: 0 if not prime, 1 if prime
 */

int helperfunction(int num, int i)
{
	if (i < num)
	{
	if (num % i == 0)
	return (0);
	else
	return (helperfunction(num, i + 1));
	}
	else
	{
	return (1);
	}
}

/**
 * is_prime_number - chech if prime or not
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 * 0 if number is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	else
	{
	return (helperfunction(n, 2));
	}
}
