#include "main.h"

/**
 * _abs - function that returns the absolute
 * @n: integer input
 * Return: the absolute value
 */

int _abs(int n)
{
int i;

if (n < 0)
{
	i = n * (-1);
	return (i);
}
else
{
	return (n);
}

}
