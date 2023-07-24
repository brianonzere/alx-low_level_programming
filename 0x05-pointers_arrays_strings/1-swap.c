#include "main.h"

/**
 * swap_int - swaps
 * @a: pointer to a
 * @b: pointer to b
 */

void swap_int(int *a, int *b)
{
int x, y;

x = *a;
y = *b;


*a = y;
*b = x;

}

