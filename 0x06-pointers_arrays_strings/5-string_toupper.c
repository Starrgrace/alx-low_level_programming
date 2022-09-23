#include "main.h"

/**
 * string_toupper - changes lowercase letter to uppercase letter of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *)
{
	int index = 0;

	while (*str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
