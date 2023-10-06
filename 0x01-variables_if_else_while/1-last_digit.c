#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* get the last digit keeping sign */
	int ld = n % 10;

	if (ld < 6 && ld != 0)
	{
		/* code */
	printf("Last digit of %d is %d and is less than 6 and not 0/n", n, ld);

	} else if (ld == 0)
	{
		/* code */
	printf("Last digit of %d is %d and is 0/n", n, ld);

	} else if (ld > 5)
	{
		/* code */
	printf("Last digit of %d is %d and is greater than 5/n", n, ld);

	}

	return (0);
}
