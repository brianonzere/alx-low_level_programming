#include "main.h"

/**
 * st_len - strlen function
 * @n: str piointer
 * Return: int
 */
unsigned int st_len(char *n)
{
unsigned int b, lenm = 0;

if (n == NULL)
	return (0);
for (b = 0; n[b] != '\0'; b++)
{

	lenm++;

}
return (lenm);
}



/**
 * str_concat - str_concat
 * @s1: s1 pointer
 * @s2: s2 pointer
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k;
char *m;

if (s1 == NULL)
{
	if (s2 == NULL)
	{
		return (NULL);
	}
}

i = st_len(s1);
j = st_len(s2);


j = j + i + 1;

m = malloc(j *sizeof(char));

if (m == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	m[i] = s1[i];
}
for (k = 0; i < j; i++, k++)
{
	m[i] = s2[k];
}
return (m);
}
