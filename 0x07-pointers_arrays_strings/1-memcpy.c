#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: Where to copy to
 * @src: From where we copy from
 * @n: unasigned int
 *
 * return: a ponter to @dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for(i = 0; i < n; i++)
	
		dest[i] = src[i];

	
	return (dest);

}
