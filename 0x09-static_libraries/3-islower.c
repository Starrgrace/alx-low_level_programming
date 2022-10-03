#include "main.h"
#include <stdio.h>
/**
 * _islower -to check for lowercase character
 * @c: int c is passed into the function as argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
