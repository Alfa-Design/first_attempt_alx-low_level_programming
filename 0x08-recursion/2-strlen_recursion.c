#include "main.h"

/**
 *  _strlen_recursion - Prints the lengath of a string.
 *  @s: the sring
 *
 *
 *  Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int j = 0;
	if(*s == '\0')
		return(0);

	j = i + _strlen_recursion(s+1);

	return(j);
}
