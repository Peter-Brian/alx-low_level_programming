#include "search_algos.h"

/**
 * interpolation_search - function using Interpolation search algorithm
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 * Return: index where value is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low < high)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		/* check the max limit */
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		/* check the min limit */
		if (pos == 0 && array[pos] > value)
			return (-1);
		/* check if the value is found */
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
