#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: this is the c string to be scanned
 * @accept: chacter in str1 that matches one of the character in str2
 * Return: string s that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
