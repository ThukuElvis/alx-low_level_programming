#include "main.h"

/**
 * swap_int - takes in two variable interger and swaps them
 * @a: swap and store address of b
 * @b: swap and store address of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
