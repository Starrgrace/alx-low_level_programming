#include "main.h"

/**
 * string_toupper - changes lowercase letter to uppercase letter of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; s[i] !=  '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
