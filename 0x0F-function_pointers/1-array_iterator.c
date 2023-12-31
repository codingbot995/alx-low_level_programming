#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function
 * @array:the array
 * @size:size
 * @action:function to perform on each element of the array
 * Return:0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
