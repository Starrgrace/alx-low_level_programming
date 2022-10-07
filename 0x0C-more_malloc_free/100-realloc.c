#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a
 * call to malloc : malloc(old_size)
 * @old_size: size in bytes allocated for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new mem block, NULL or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int i;
	/*comment*/
	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = clone[i];
	}
	free(ptr);
	return (realloc);
}
