#include "main.h"

/**
 * factorial - gives the factorial of a given number
 * @n: the given number
 *
 * return: returns the factorial
 * 	return -1 if the number given is less than 0
 */

int factorial(int n)
{
	if(n < 0)
		return(-1);
	else if(n == 1)
		return(n);
	else 
	{
		return(n * factorial(n-1));
	}
}
