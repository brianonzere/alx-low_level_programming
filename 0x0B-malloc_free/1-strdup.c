#include "main.h"
/**
 * _strdup - _strdup
 * @str: str pointer
 * Return: char
 */
char *_strdup(char *str)
{
char *m;
int i, n;


if (str == NULL)
	return (NULL);
for (i = 0; str[i] != '\0' ; i++)
{
	i++;
}
i++;
n = i;
m = malloc(i *sizeof(char));

if (m == NULL)
	return (NULL);
for (i = 0; i < n; i++)
{
	m[i] = str[i];
}
return (m);

}
