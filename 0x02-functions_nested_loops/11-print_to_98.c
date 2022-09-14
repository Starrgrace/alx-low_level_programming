#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers
 * @t: counter
 * Return: 0
 */
void print_to_98(int t)
{
	if (t >= 98)
	{
		while (t > 98)
			printf("%d, ", t--);
		printf("%d\n", t);
	}
	else
	{
		while (t < 98)
			printf("%d, ", t++);
		printf("%d\n", t);
	}
}
