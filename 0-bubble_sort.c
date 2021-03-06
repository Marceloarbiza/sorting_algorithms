#include "sort.h"
#include <stdbool.h>
/**
  * bubble_sort - bubble sort
  * @array: array int
  * @size: size_t
  */

void bubble_sort(int *array, size_t size)
{
	size_t len = size, j;
	int aux;
	bool flag;

	if (!array || size <= 0)
		return;

	while (flag == true)
	{
		flag = false;
		for (j = 1; j <= len - 1; j++)
		{
			if (array[j - 1] > array[j])
			{
				aux = array[j - 1];
				array[j - 1] = array[j];
				array[j] = aux;
				flag = true;
				print_array(array, size);
			}
		}
	}
}
