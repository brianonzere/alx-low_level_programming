#include "main.h"


/**
 * _strcat - function
 * @dest: dest
 * @src: src
 * Return: char
 * 
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while ((dest[i]) != '\0')
	{
		len = len + 1;
		i++;
	}

	for (i = 0; (src[i]) != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);


}
