#include "main.h"

/**
 * puts_half - puts_half function
 * @str: string pointer
 */

void puts_half(char *str)
{
int i, m, x = 0;

for (i = 0; str[i] != '\0'; i++)
{
	x++;
}

if (x %  2 == 0)
{
	m = x / 2;
}
else
{
	m = (x - 1) / 2;
}
for (i = m; str[i] != '\0'; i++)
{

	_putchar(str[i]);

}
_putchar('\n');
}
