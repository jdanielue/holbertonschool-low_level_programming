#include "search_algos.h"

/**
 * linear_search - binary search
 * @array: Pointer to an array
 * @size: size of an array
 * @value: value to find
 * Return: -1 when fail
 */


int linear_search(int *array, size_t size, int value){

    size_t i;

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if ( array[i] == value)
        {
            return i;
        }
    }
    return (-1);
}
