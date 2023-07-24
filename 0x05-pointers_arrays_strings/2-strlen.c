#include "main.h"

/**
 * _strlen - strlen function
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
int i;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
	counter++;
}

return (counter);
}


