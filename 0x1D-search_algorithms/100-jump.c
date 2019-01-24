#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0, prev = 0;

	if (!array)
		return (-1);
	while (array[jump] <= value)
	{
		if (jump == 0)
			jump = sqrt(size);
		if (prev >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[jump + (int)sqrt(size)] <= value)
		{
			prev = jump;
			jump += sqrt(size);
		}
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, jump);
			break;
		}
	}

	if ((int)size < jump)
		jump = size - 1;

	while (array[prev] <= value && prev <= jump)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
