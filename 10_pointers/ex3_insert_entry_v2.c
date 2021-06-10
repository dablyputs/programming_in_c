/** The function developed in exercise 2 only inserts an element after an existing 
 * element in the list, thereby preventing you from inserting a new entry at the front 
 * of the list. How can you use this same function and yet overcome this problem?
 * (Hint: Think about setting up a special structure to point to the beginning of the list.)                 
 **/

#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry * insertEntry(struct entry *, struct entry *, struct entry *);
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

struct entry * insertEntry(struct entry *newEntry, struct entry *listEntry, struct entry *head)
{
    if (listEntry == NULL)
    {
        head = newEntry;
    }
    else
    {
        newEntry->next = listEntry->next;
        listEntry->next = newEntry;
    }  

    return head;
}

int main(void)
{
    struct entry n1, n2, n3, n4, n5, n6, newHead;
    struct entry *head = &n1;

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

    newHead.next = head;
    newHead.value = 0;
    // Next entry
    n6.next = NULL;
    n6.value = 600;

    head = insertEntry(&n6, &n1, head);
    printList(head);
    head = insertEntry(&newHead, NULL, head);
    printList(head);

    return 0;
}
