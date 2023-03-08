#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int j = 0;
	if(*s == '\0')
		return(0);

	j = 1 + _strlen_recursion(s+1);

	return(j);
}
