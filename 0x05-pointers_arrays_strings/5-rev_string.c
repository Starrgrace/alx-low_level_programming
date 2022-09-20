#include "main.h"

/**
 * *rev_string - reverse a string
 * *@s: str
 * *Return: void
 */
void rev_string(char *s)
{
8i	int asdf = 0, i, j;
	char *str, tmp;

	while (asdf >= 0)
	{
		if (s[asdf] == '\0')
			break;
		asdf++;
	}
	str = s;

	for (i = o, i < (asdf - 1); i++)
	{
		for (j = i + 1; j > 0; j__)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - i));
			*(str + (j - 1)) = tmp;
		}
	}
}
