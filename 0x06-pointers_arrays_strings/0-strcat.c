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
/*find the size of an array*/
while (dest[c])
c++;
/* iterates through each src array value without the null byte*/
for (c2 = 0; src[c2]; c2++)
/*append src[c2] to dest[c] while over writting the null byte in dest*/
dest[c++] = src[c2];
return (dest);
}
