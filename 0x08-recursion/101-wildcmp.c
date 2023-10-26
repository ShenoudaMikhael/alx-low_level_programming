int cmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        return (1);
    }
    if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    {
        s1++;
        s2++;
        return cmp(s1, s2);
    }
    if (*s2 == '*')
    {
        if ( *s1 == '\0' && *(s2 + 1) != '\0')
        {

            return (0);
        }
        if (cmp(s1, s2 + 1) || cmp(s1 + 1, s2))
        {
            return (1);
        }
    }

        return (0);
}
/**
 *
 */
int wildcmp(char *s1, char *s2)
{
    return (cmp(s1, s2));
}
