#include <stddef.h>
/**
 * array_iterator - execute function on array via pointer
 * @array: array
 * @size: size of array
 * @action: pointer to function needed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
