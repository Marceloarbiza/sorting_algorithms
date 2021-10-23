#include "sort.h"
/**
  *
  */

void swap(int *a, int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

int partition(int *array, int low, int high, size_t size)
{
        int j;
        int pivot = array[high];
        int i = low - 1;

        for (j = low; j < high; j++)
        {
                if(array[j] < pivot)
                {       
                        i++;
                        swap(&array[i], &array[j]);
                        if (array[i] != array[j])
                                print_array(array, size);
                }
        }
        swap(&array[i + 1], &array[high]);
        if (array[high] != array[i + 1])
                print_array(array, size);
        return (i + 1);
}

void quicksort( int *array, int low, int high, size_t size)
{
        if (low < high)
        {
                int pi = partition(array, low, high, size);
                quicksort(array, low, pi - 1, size);
                quicksort(array, pi + 1, high, size);
        }
}
void quick_sort(int *array, size_t size)
{
        quicksort(array, 0, size - 1, size);
}
