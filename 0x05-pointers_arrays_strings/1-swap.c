#include "main.h"

/* task 1 */

/**
 * swap_int - swap the value of 2 integers
 * @a: integer 1
 * @b: integr 2
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a; /* store value of *a in swap */
	*a = *b; 
	*b = swap; /* swap = *a sp *b is now *a's value */
