#include "main.h"

/**
 * _strcpy - _strcpy function
 * @dest: destination address
 * @src: source address
 * Return: pointer to the Dest
 */
char *_strcpy(char *dest, char *src)
{
int j, i = 0;
while (*(src + i) != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}
return (dest);
}
