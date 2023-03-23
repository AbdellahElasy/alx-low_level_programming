#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 **/
 * print_last_digit - dqzdqzdqzdqzd
 * @n: Description of parameter x
 *
 * Description: ddzqdqzd
 * section header: Section description)*
 * Return: Description of the returned value
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	/**if (a < 0)
		a = -a;**/
	_putchar(a + '0');

	return (a);
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
