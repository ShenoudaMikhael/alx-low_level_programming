#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry
 * @argc: arguments count
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
    int res;
    int num1, num2;
    char *s;

    if (argc > 4)
    {
        return (-1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    s = argv[2];
    res = get_op_func(s)(num1, num2);
    printf("%d\n", res);

    return (0);
}
