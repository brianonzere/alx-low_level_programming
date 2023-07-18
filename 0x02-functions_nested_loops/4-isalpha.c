#include "main.h"

/**
 * _isalpha -  function that checks if its alpha
 * @c: character to be checked
 * Return: Returns 1 if its alpha else 0
 */
int _isalpha(int c)
{
if (((c >= 65) && (c <= 90))||((c >= 97) || (c <= 122)))
{
	return (1);
}
else
{
	return (0);
}
}
