#include "main.h"


/**
 * set_bit - function
 * @n: number
 * @index: number
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31)
		return (-1);

	*n = *n | 1 << index;
	
	return (1);

}
