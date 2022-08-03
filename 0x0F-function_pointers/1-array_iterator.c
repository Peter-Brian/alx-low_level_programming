#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: array to iterate over
 * @size: size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
