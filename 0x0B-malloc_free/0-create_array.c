#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that create an array of chars, and initialize it with a specific char
 * @size: size of array
 * @c: char to initalize array with
 *
 * Return: NULL if it falls or pionter to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = mollac(sizeof(char) *size);

	/* check if mollac was successful */

	if (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}


