/*
 * file: 10-print_triangle.c
 * Auth: John Ouma Otieno
 *
 */


#include <main.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int spc, rw, tr;
	
	if(size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(rw = 0; rw < size; rw++)
		{
			for(spc = 0; spc < size-rw; spc++)
			{
				_putchar(' ');
			}
			for(tr = 0; tr <= rw; tr++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
