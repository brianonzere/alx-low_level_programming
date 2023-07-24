#include "main.h"

/**
 * print_array - print_array function
 * @a: function pointer
 * @n: no of elements to be printed
 */


void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d",a[i]);
	if (i < (n - 1))
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}
}



}
