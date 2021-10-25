#include "sort.h"
/**
  * selection_sort - selection sort
  * @array: array
  * @size: size
  */

void selection_sort(int *array, size_t size)
{
	size_t len = size;
	size_t j, i, aux, tmp;

	for (i = 0; i < len - 1; i++)
	{
		aux = i;
		for (j = i + 1; j < len; j++)
		{
			if (array[j] < array[aux])
			{
				aux = j;
			}
		}
		if (i != aux)
		{
			tmp = array[i];
			array[i] = array[aux];
			array[aux] = tmp;
			print_array(array, size);
		}
	}
}
