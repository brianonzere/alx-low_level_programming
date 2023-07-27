#include "main.h"

/**
 * _strncpy - functio
 * @dest: dest
 * @src: src
 * @n: n
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while ((dest[i]) != '\0')
	{
		len = len + 1;
		i++;
	}

	for (i = 0; i < n && (src[i]) != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);


}
