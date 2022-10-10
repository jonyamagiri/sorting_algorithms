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

#### Task: 100-shell_sort.c
Write a function that sorts an array of integers in ascending order using the [Shell sort](https://alx-intranet.hbtn.io/rltoken/FdpP4Qin3iDAaz1kuPD2Kg) algorithm, using the `Knuth sequence`

#### Task: 101-cocktail_sort_list.c, 101-O
Write a function that sorts a doubly linked list of integers in ascending order using the [Cocktail shaker sort](https://alx-intranet.hbtn.io/rltoken/bwa4mHfUbbWTB8J2OIHvpA) algorithm

#### Task: 102-counting_sort.c, 102-O
Write a function that sorts an array of integers in ascending order using the [Counting sort](https://alx-intranet.hbtn.io/rltoken/ChcoDSCqnJHGC-qrSPEGHQ) algorithm

#### Task: 103-merge_sort.c, 103-O
Write a function that sorts an array of integers in ascending order using the [Merge sort](https://alx-intranet.hbtn.io/rltoken/8sZ3nAhd_YLNzHCgNbbf8A) algorithm

#### Task: 104-heap_sort.c, 104-O
Write a function that sorts an array of integers in ascending order using the [Heap sort](https://alx-intranet.hbtn.io/rltoken/YKYRdSdomaVkNrtNv1KS6Q) algorithm

#### Task: 105-radix_sort.c
Write a function that sorts an array of integers in ascending order using the [Radix sort](https://alx-intranet.hbtn.io/rltoken/pBsj4j_AF_mJAgNZWmX3VQ) algorithm

#### Task: 106-bitonic_sort.c, 106-O
Write a function that sorts an array of integers in ascending order using the [Bitonic sort](https://alx-intranet.hbtn.io/rltoken/N-bjAbxm5yr4DoeIDz5lLw) algorithm

#### Task: 107-quick_sort_hoare.c, 107-O
Write a function that sorts an array of integers in ascending order using the [Quick sort](https://alx-intranet.hbtn.io/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

#### Task: 
Write a function that sorts a deck of cards.
* You have to push your `deck.h` header file, containing the previous data structures definition
* Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
* You can assume there is exactly `52` elements in the doubly linked list.
* You are free to use the sorting algorithm of your choice
* The deck must be ordered:
* * From `Ace` to `King`
* * From `Spades` to `Diamonds`


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
```
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
```
___

#### Files:

* [test_files](https://github.com/jonyamagiri/sorting_algorithms/tree/master/test_files)




