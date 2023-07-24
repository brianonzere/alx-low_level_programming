#include "main.h"

/**
 * print_rev - print_rev function
 * @s: string pointer
 */
void print_rev(char *s)
{
int i;
int x = 0;

for (i = 0; s[i] != '\0'; i++)
{
	x++;
}

for ( x = x - 1; x >= 0; x--)
{
	_putchar(s[x]);
}
_putchar('\n');
}


