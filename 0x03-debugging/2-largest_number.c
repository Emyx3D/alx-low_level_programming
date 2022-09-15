#include "main.h"

/**
 * largest numbers - returns the 3 largest numbers
 * @a: first numner
 * @b: second number
 * @c: third number
 * Return: largest numbers
 */

int largest_number(int a, b, c)
{
	int largest;

	if ((a>b) && (a>c))
	{
		largest = a;
	}
	else if((b>a) && (b>c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
