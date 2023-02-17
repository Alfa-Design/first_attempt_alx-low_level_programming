/*
 * File : 5-print_numbers.c
 * Auth: John Ouma otieno <john7ouma@gmail.com>
 */


#include <stdio.h>

/**
 * Main - prints a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 *
 * Return: Always o
 */

int main(void)

{
	int num = 0;

	for(num = 0; num < 10; num++)
	
		printf("%d", num);
		printf("\n");

	return (0);
}
