#include "main.h"

/**
 * reverse_array - function that reverses the conten of an array of integers
 * @a: the array
 * @n: n is the number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
