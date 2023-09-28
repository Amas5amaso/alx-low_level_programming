#include "main.h"
/**
 * 0-puts_recursion.c
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	s++;
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
