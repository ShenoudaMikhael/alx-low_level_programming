/**
 * single_check - check for chars form start against end
 * @len: str length
 * @i: index
 * @s: string ptr
 * Return: int
 */
int single_check(int len, int i, char *s)
{

if (i >= len)
{

return (1);
}
if (s[len] == s[i])
{

return (single_check(len - 1, (i + 1), s));
}
return (0);
}
/**
 * ptr_len - get the ptr len by pushing forward
 * @ptr: string ptr
 * Return: int
 */
int ptr_len(char *ptr)
{
if (*ptr)
{
ptr++;
return (ptr_len(ptr) + 1);
}
return (0);
}
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: ptr
* Return: int
*/
int is_palindrome(char *s)
{
int len, i;
i = 1; /* ??? */
/* get length */
len = ptr_len(s);
return (single_check(len, i, s - 1));
}
