#include "main.h"
/**
 * print_rev - prints a string in revese order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = 1 ; i >= 0; i--)
{
_putvhar (s[i]);
}

_putchar ('\n');
}
