/*
    Develop insertEntry() and removeEntry() functions for a doubly linked list that are similar in function
    to those developed in previous exercises for a singly linked list. Why can your removeEntry() function
    now take as its argument a direct pointer to the entry to be removed from the list?
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
void addentry(struct entry *, struct entry *);
struct entry *removeentry(struct entry *);

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

// My function only appends to the list
void addentry(struct entry *listentry, struct entry *newEntry)
{
    while (listentry->next != NULL)
    {
        listentry = listentry->next;
    }
    listentry->next = newEntry;
    newEntry->next = NULL;
    newEntry->previous = listentry;
    newEntry->value = listentry->value + 100;
}

// This will remove any entry
struct entry *removeentry(struct entry *delEntry)
{
    // Set my head to the entry to be deleted
    struct entry *head = delEntry;

    if (delEntry->next == NULL)
    {
        // If I'm at the end just set the pointer to me to null
        delEntry->previous->next = NULL;
        head = delEntry->previous;
    }
    else if (delEntry->previous == NULL)
    {
        // If I'm at the beginning just set the next elements previous pointer to null
        delEntry->next->previous = NULL;
        head = delEntry->next;
    }
    
    else
    {
        // otherwise remove both pointers to me
        delEntry->previous->next = delEntry->next;
        delEntry->next->previous = delEntry->previous;
        head = delEntry->previous;
    }
    
    while (head->previous != NULL){
        head = head->previous;
    }

    return head;
    
}

int main()
{
    struct entry n1, n2, n3, n4, n5, n6, n7;
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
    addentry(head_pointer, &n7);
    printlist(head_pointer);
    head_pointer = removeentry(&n4);
    printlist(head_pointer);

    return 0;
}