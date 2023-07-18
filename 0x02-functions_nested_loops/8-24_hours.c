#include "main.h"

/**
 * jack_bauer - 24 hour function
 */

void jack_bauer(void)
{
int a = 0, b = 0, c = 0, d = 0;


for (a = 0; a < 3; a++)
{
	for (b = 0; b <= 9; b++)
	{
		if ((a == 2) && (b > 3))
		{
			break;
		}
		for (c = 0; c < 6; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				_putchar('0' + a);
				_putchar('0' + b);
				_putchar(':');
				_putchar('0' + c);
				_putchar('0' + d);
				_putchar('\n');
			}
		}
	}

}
}
