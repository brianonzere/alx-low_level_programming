#include "main.h"

/**
 * _islower - is lower function
 * @c: character to be tested
 * Return: returns 1 if lower , 0 if upper
 */
int _islower(int c)
{

if ((c >= 97) && (c <= 122))
{
	return (1);
} 
else
{
	return (0);
}

}
