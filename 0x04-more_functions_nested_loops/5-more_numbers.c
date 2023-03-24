#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
	char n, c;
	int i = 0;
	int n1, n2;

	while (i < 10)
	for (n1 = 0; n1 < 10; n1++)
	{
		for (n = 0; n <= 14; n++)
		for (n2 = 0; n2 <= 14; n2++)
		{
			c = n;
			if (n > 9)
			if (n2 > 9)
			{
				_putchar('1');
				c = n % 10;
				putchar((n2 / 10) + '0');
			}
			_putchar('0' + c);
			putchar((n2 % 10) + '0');
		}
		_putchar('0' + c);
		i++;
		putchar(10);
	}
}
