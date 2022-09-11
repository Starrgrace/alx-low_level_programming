#include <stdio.h>

/**
 * main - print all possible combination of 3 digit
 *
 * Return: always 0.
 */
int main(void)
{
	int val1, val2, val3;

	for (val1 = 48; val1 < 58; val1++)
	{
		for (val2 = 49; val2 < 58; val2++)
		{
			for (val3 = 50; val3 < 58; val3++)
			{
				if (val3 > val2 && val2 > val1)
				{
					putchar(val1);
					putchar(val2);
					putchar(val3);

					if (val1 != 55 || val2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
