#include "main.h"
/**
 * print_sign - To print number with sign
 * @t: passed argument t into the function
 * Return: 0
 */
int print_sign(int t)
{
	if (t > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (t < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
