#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {1, 2, 5, 10, 7, 28, 374, 3, 46, 6, 9, 12, 22, 33, 55, 78, 12, 212, 0, 13, 33, 444, 12, 222, 12, 22, 78, 88, 77, 38, 445, 56, 667, 777, 77, 7, 11, 23, 12, 34, 73, 4, 6, 4, 575, 82, 2, 5, 10, 7, 28, 374, 3, 46, 6, 9, 12, 22, 33, 55, 78, 12, 212, 0, 13, 33, 444, 12, 222, 12, 22, 78, 88, 77, 38, 445, 56, 667, 777, 7, 2, 5, 10, 7, 28, 374, 3, 46, 6, 9, 12, 22, 33, 55, 78, 12, 212, 0, 13, 33, 444, 12, 222, 12, 22, 78, 88, 77, 38, 445, 56, 667, 777, 77, 7, 11, 23, 12, 34, 7,
		   3, 4, 6, 4, 575, 82, 2, 5, 10, 7, 28, 374, 3, 46, 6, 9, 12, 22, 33, 55, 78, 12, 212, 0, 13, 33, 444, 12, 222, 12, 22, 78, 88, 77, 38, 445, 56, 667, 777, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(arr, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    cocktail_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
