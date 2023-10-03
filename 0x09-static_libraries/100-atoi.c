#include "main.h"

/**
 * _atoi - check if a character is a digit
 * @s: int to be checked
 *
 * Return: 1 if there is a digit, 0 otherwise
 */


int _atoi(char *s)
{
	int result = 0;

	for (int i = 0; s[i] != '\0'; i++)
	if (_isdigit(s[i]))
	result = (result * 10 + (s[i] - '0'));
	}
	return (0);
}
