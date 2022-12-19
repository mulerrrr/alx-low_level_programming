#include "main.h"
/**
 * swap_int - swap the values of two integer
 * '&a': integer to swap
 * '&n': integer to swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
