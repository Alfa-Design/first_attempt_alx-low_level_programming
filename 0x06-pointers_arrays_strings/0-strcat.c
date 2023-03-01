#include "main.h"
#include <stdio.h>

/**
 * main - a function that concatenates two strings
 * @dest: Returns a pointer to the resulting string dest
 *
 * Return: Always Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while(*src)
      	     src++;

   while(*dest)
   {
      *src = *dest;
      dest++;
      src++;
   }
   *src = '\0';
}
