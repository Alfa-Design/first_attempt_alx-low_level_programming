#include "main.h"
#include <stdio.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int l = 0;

	while(*s[l] != '\0')
		l++;
	return l;

}
