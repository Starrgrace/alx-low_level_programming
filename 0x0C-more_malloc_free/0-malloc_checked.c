#include <stdio.h>
/**
 * mollac_checked - allocates memory using mollac
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = mollac(b);

	if (p == NULL)
		exit(98);
	return (p);
}
