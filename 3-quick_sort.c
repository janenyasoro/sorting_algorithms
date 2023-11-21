#include "sort.h"
/**
 * quick_sort - func to sort array in
 * ascending order using quick sort
 * @array: input array
 * @size: array size
 * Return: void return
 */
void quick_sort(int *array, size_t size)
{
	myQSort(array, 0, size - 1, size);
}
/**
 * myQSort - helper func for quicksort func
 * @a: input array
 * @low: first index
 * @high: last index
 * @size: array size
 * Return: void return
 */
void myQSort(int *a, int low, int high, int size)
{
	int temp, i, wall, pivot;

	if (low < high)
	{
		pivot = high;
		wall = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[pivot])
			{
				if (i != wall)
				{
					temp = a[i];
					a[i] = a[wall];
					a[wall] = temp;
					print_array(a, size);
				}
				wall++;
			}
		}
		if (wall != pivot && a[wall] != a[pivot])
		{
			temp = a[wall];
			a[wall] = a[pivot];
			a[pivot] = temp;
			print_array(a, size);
		}
		myQSort(a, low, wall - 1, size);
		myQSort(a, wall + 1, high, size);
	}
}
