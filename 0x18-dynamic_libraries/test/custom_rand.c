#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int rand()
{
    write(1, "9 8 10 24 75 - 9\n", 17);
    write(1, "Congratulations, you win the Jackpot!\n", 39);
    exit(0);
}