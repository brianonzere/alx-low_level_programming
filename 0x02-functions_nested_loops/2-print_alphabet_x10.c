#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets
 */

void print_alphabet_x10(void)
{
int x = 0, i = 97;
for (; x < 10; x++)
{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
}
