#include "main.h"

/**
*add description
*/
char *_strncat(char *dest, char *src, int n)
{
    int i, j, m;

    for (m = 0; dest[m] != '\0'; m++);

    for (i = m, j = 0; j <= n - 1; i++, j++)
    {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return (dest);
}