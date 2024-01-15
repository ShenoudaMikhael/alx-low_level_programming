#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int rand()
{
    
    write(1, "Congratulations, you win the Jackpot!\n", 39);
    exit(0);
}