/*
    Define a doubly linked list and then write a small program that implements
    a small doubly linked list and prints out the elements of the list.
*/

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};

// Prototype definitions
void printlist(struct entry *);

void printlist(struct entry *list)
{
    for (int i = 1; list != NULL; i++)
    {
        printf("%i: (%p)\n", i, list);
	    printf("Value: %i\n", list->value);
	    printf("Next Node: %p\n", list->next);
	    printf("Previous node: %p\n", list->previous);
	    list = list->next;
    }
}

int main()
{
    struct entry n1, n2, n3, n4, n5, n6;
    struct entry *head_pointer = &n1;

    n1.next = &n2;
    n1.previous = NULL;
    n1.value = 100;
    n2.next = &n3;
    n2.previous = &n1;
    n2.value = 200;
    n3.next = &n4;
    n3.previous = &n2;
    n3.value = 300;
    n4.next = &n5;
    n4.previous = &n3;
    n4.value = 400;
    n5.next = &n6;
    n5.previous = &n4;
    n5.value = 500;
    n6.next = NULL;
    n6.previous = &n5;
    n6.value = 600;

    printlist(head_pointer);

    return 0;
}