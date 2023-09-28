#include "main.h"

/**
 * bina - my own function
 * @c: int pointer
 * Return: int
 */
int bina(int c)
{
	int i = 1, j;

	for (j = c; j != 0; j--)
	{
		i = i * 2;
	}

	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to binary numbers
 * Return: integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int cnt, m, i = 0;

	if (b == NULL)
		return (0);
	for (cnt = 0; b[cnt] != '\0'; cnt++)
	{
		if ((b[cnt] == '0') || (b[cnt] == '1'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}

	for (cnt = i - 1; cnt >= 0; cnt--)
	{
		m = bina(i - 1 - cnt);
		if (b[cnt] == '1')
		{
			ret = ret + m;
		}
		else
		{
			ret = ret + 0;
		}
	}

	return (ret);
}
