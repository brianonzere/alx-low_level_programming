#include "main.h"

/**
 * print_last_digit - function that prints last dgt
 * @n: the number
 * Return: last digit
 */
int print_last_digit(int n)
{
int x;

if (n == 0)
	return (0);

x = n % 10;
return (x);

}
