#include "main.h"
/**
 * swap_int - swap the vlaue of 2 integers
 * @a: first parameter
 * @b: second parameter
 *
 * Description: swap_int swaps the vlaue of *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
