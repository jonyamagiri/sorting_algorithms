## 0x1B. C - Sorting algorithms & Big O

> This repository contains the tasks for `Sorting algorithms & Big O` project and a description of what each program or function does:

### Tasks

#### Task: 0-bubble_sort.c, 0-O
Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://alx-intranet.hbtn.io/rltoken/awhP8BhtkGi-lwmMc2-KAw) algorithm

#### Task: 1-insertion_sort_list.c, 1-O
Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://alx-intranet.hbtn.io/rltoken/GocxRKbPdsmERXeOHMCO2w) algorithm

#### Task: 2-selection_sort.c, 2-O
Write a function that sorts an array of integers in ascending order using the [Selection sort](https://alx-intranet.hbtn.io/rltoken/SEbg0fBEraioQcl-igvUSw) algorithm

#### Task: 3-quick_sort.c, 3-O
Write a function that sorts an array of integers in ascending order using the [Quick sort](https://alx-intranet.hbtn.io/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

#### Task: 




#### Data structure and functions for this project:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

___

#### Files:

* []()




