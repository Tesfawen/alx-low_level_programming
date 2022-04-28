#include "main.h"
/**
<<<<<<< HEAD
 *_strlen_recursion - return length of a string
=======
 *_strlen_recursion - length of a string
>>>>>>> 320b93ae099213e06c1a7db67f88cae0896ed8a0
 *@s: pointer block of memory to fill
 *Return: strlen_recursion
 */

<<<<<<< HEAD
int _strlen_recursion(char *s);
{


=======
int _strlen_recursion(char *s)
{

/*Base condition*/
>>>>>>> 320b93ae099213e06c1a7db67f88cae0896ed8a0
if (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
