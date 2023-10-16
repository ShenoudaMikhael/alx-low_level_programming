/**
 * swap_int - swap two ints'
 * @a: input 1
 * @b: input 2
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
return;
}