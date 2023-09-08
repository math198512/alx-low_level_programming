#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size) 
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: pointer to the newly created block of memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
        {
                new_ptr = malloc(new_size);
                return (new_ptr);
        }
	if (old_size == new_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < new_size || i < old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *) ptr + i);
		}
	}
	free(ptr);
	return (new_ptr);
}
