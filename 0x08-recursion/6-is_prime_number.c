#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int a;
	if (n < 2)
		return 0;
	for (a = 2; n/a >= a; a++)
	{
		if (n % a == 0)
			return (0);
			
	}
	return (1);
}
