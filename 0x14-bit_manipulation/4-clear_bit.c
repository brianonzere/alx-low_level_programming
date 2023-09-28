#include "main.h"

/**
 * clear_bit - function
 * @n: number
 * @index: number
 * Return: integer bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > 31)
return (-1);

*n = *n & ~(1 << index);

return (1);

}
