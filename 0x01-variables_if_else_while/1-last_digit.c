#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*Main - Entry point
*Description: 'get the last degit of a number'
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

ld = n % 10;

if (ld > 5);

printf("last digit of %d is %d and is greater than 5\n",n, ld);
else if(ld == 0);

printf("last digit of %d is %d and is 0\n",n, ld);
else
printf("last digit of %d is %d and less than 6 and not 0\n",n, ld);
	return (0);
}
