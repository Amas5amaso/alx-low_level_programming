#include "main.h"

/**
* _Strncat Conctenates two strings
* @dest destination string 
* @src: soyrce string
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
	dest[len + i] = src[i];
	Src++;
	}	
	dest[len + i] = '\0';
	return (dest);
}

