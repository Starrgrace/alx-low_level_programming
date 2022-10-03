#include "main.h"
/**
 * _strcat - use concatenation to join strings
 * @dest: string that will be appended
 * @src: source string
 *
 * Return: A pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
