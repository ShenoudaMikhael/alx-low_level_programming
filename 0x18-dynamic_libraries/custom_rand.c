#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * srand - hack nukbers
 * @q: int
 * Return: void
 */
void srand(unsigned int q)
{
	(void)q;
	write(STDOUT_FILENO, "9 8 10 24 75 - 9\n", 17);
	write(STDOUT_FILENO, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
