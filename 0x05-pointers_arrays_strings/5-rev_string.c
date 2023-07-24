#include "main.h"


/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{

int i, j, x = 0;
char m;

for (i = 0; s[i] != '\0'; i++)
{
	x++;
}

for (i = 0, j = x - 1; i < j; i++, j--)
{
	m = s[i];
	s[i] = s[j];
	s[j] = m;

}

}
