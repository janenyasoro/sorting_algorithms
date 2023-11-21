#include "sort.h"
/**
 * counting_sort - sort with counting sort algo
 * @array: array
 * @size: size
 * Return: void return
 */

void counting_sort(int *array, size_t size)
{
	int *buffer, i, *a, n;

	if (size < 2)
		return;

	for (n = i = 0; i < (int)size; i++)
		if (array[i] > n)
			n = array[i];

	buffer = malloc(sizeof(int) * (n + 1));
	if (!buffer)
		return;
	for (i = 0; i <= n; i++)
		buffer[i] = 0;

	for (i = 0; i < (int)size; i++)
		buffer[array[i]] += 1;
	for (i = 1; i <= n; i++)
		buffer[i] += buffer[i - 1];
	print_array(buffer, (n + 1));
	a = malloc(sizeof(int) * (size + 1));
	if (!a)
	{
		free(buffer);
		return;
	}
	for (i = 0; i < (int)size; i++)
	{
		a[buffer[array[i]] - 1] = array[i];
		buffer[array[i]] -= 1;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = a[i];
	free(buffer);
	free(a);
}
