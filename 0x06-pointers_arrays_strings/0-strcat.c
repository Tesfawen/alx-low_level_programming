#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: Apointer to a character that will be updated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;

while (dest[c])
c++;

for (c2 = 0; src[c2]; c2++)

dest[c++] = src[c2];
return (dest);
}
