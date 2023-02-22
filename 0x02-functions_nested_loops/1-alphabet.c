/*
 *File: 1-alphabet.c
 * Auth: John Ouma Otieno <John7ouma@gmail.com>
 *
 */

#include "main.h"

/**
 * main - check the code
 * print_alphabet prints all the alphabets in lower case, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
