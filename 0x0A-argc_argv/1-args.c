#include <stdio.h>
/**
 * main - write a program that prints the number of arguments pased into it
 * @argc: this is argument for count
 * @argv: this is argument for vector
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
