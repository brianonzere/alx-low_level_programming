#include "main.h"
/**
 * _strdup - _strdup
 * @str: str pointer
 * Return: char
 */
char *_strdup(char *str)
{
char *m;
int i;


if (str == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
	i++;
}

m = malloc(i * sizeof(char));

if (m == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
	m[i] = str[i];
}
return (m);

}
