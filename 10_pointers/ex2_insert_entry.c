/** Write a function called insertEntry() to insert a new entry into a linked list. 
 *  Have the procedure take as arguments a pointer to the list entry to be inserted 
 *  (of type struct entry as defined in this chapter), and a pointer to an element 
 *  in the list after which the new entry is to be inserted.                     
 **/

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *, struct entry *);
void printList(struct entry *);

void printList(struct entry *list)
{
    {
        int i;

        for (i = 1; list != NULL; ++i)
        {
            printf("\n%i (%p)\n", i, list);
            printf(" value: %i\n", list->value);
            printf(" next: %p\n", list->next);
            list = list->next;
        }
    }
}

void insertEntry(struct entry *newEntry, struct entry *listEntry)
{
    
    newEntry->next = listEntry->next;
    listEntry->next = newEntry;
}

int main(void)
{
    struct entry n1, n2, n3, n4, n5, n6;
    struct entry *list_pointer = &n1;

    n1.next = &n2;
    n1.value = 100;

    n2.next = &n3;
    n2.value = 200;

    n3.next = &n4;
    n3.value = 300;

    n4.next = &n5;
    n4.value = 400;

    n5.next = NULL;
    n5.value = 500;
    // Next entry
    n6.next = NULL;
    n6.value = 600;

    insertEntry(&n6, &n1);
    printList(list_pointer);

    return 0;
}
