#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 /**
 *
 *Main - Entry point
 *Description: 'get the last degit of a number'
 *Return: Always 0 (success)
 */

int main(void)
{
int n;
int lastnum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
if (lastnum > 5)	
printf("last digit of %d is %d and is greater than 5\n", n, lastnum);

else if (lastnum == 0)
printf("last digit of %d is %d and is 0\n", n, lastnum);

else if (lastnum < 6 && lastnum != 0)}
printf("last digit of %d is %d and less than 6 and not 0\n", n, lastnum);
return (0);
}

