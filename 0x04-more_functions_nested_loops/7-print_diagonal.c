#include "main.h"
/**
 * more_numbers - prints 10 times the number, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int first_number;
int secound_number;
int result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
secound_number = result;
}
else
{
first_number = result / 10;
secound_number = result % 100000000000000000;
_putchar (first_number + '0');
}

_putchar (secound_number + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}
}
