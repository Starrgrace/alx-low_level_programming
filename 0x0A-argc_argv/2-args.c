#include <stdio.h>
/**
 * main - program that print all argument that it recieves
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always (0) success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
