#include "main.h"
#include <stdio.h>

/* task 0 */

/**
 * reset_to_98 - reset the value a pointer points to to 98
 */
void reset_to_98(int *n)
{
	int n = 402;
	*n = &n;
	*n = 98;
}
