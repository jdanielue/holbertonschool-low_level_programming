#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: Pointer to an array
 * @size: size of an array
 * @value: value to find
 * Return: -1 when fail
 */

int binary_search(int *array, size_t size, int value){

    int izq, der, med;
    int i;

    izq = 0;
    der = size -1;

    while (izq < der)
    {
        med = (der + izq) / 2;
        printf("Searching in array:");
        for (i = izq; i < der; i++)
        {
            printf("%d, ", array[i]);
        }
        printf("%d", array[der]);
        printf("\n");

        if (array[med] == value)
            return med;
        else if (array[med] > value)
        {
            der = med - 1;
        }
        else
        {
            izq = med + 1;
        }
    }
    return -1;
}
