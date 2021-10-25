#include "sort.h"
/**
  * shell_sort - shell sort
  * @array: array
  * @size: size
  */

void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int aux;

	while (gap < size)
		gap = (gap * 3) + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			aux = array[i];
			j = i;
			while ((j > gap - 1) && (array[j - gap] >= aux))
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = aux;
		}
		gap = (gap - 1) / 3;
	}
}
