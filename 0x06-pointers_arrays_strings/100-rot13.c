#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *c)
{
	int i;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] > 64 && c[i] < 91) || (c[i] > 96 && c[i] < 123))
		{
			c[i] = (c[i] - 65 > 25) ?
				storel[s[i] - 97] : storeh[s[i] - 65];
		}
	}
	return (c);
}
