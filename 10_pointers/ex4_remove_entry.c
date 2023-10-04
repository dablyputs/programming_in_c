/* 
Write a function called removeEntry() to remove an entry from a linked list. 
The sole argument to the procedure should be a pointer to the list. 
Have the function remove the entry after the one pointed to by the argument. 
(Why can’t you remove the entry pointed to by the argument?) 
You need to use the special structure you set up in exercise 3 to handle the 
special case of removing the first element from the list.
*/
#include <stdio.h>

// A signly linked list
struct entry 
{
    int value;
    struct entry *next;
};

void removeEntry(struct entry *);
void printList(struct entry *);

void removeEntry(struct entry *head)
{
    if (head->next != NULL) // if the next node isn't null
    {
        head->next = head->next->next; // the next node becomes the following node
    } 
}

void printList(struct entry *list)
{
    for (int i = 1; list != NULL; ++i)
    {
        printf("\n%i (%p)\n", i, list); // print the value of i and the address of list
        printf(" value: %i\n", list->value); // print the value stored in list
        printf(" next: %p\n", list->next); // print the address of the next node
        list = list->next;
    }
}

int main(int argc, char const *argv[])
{
    struct entry s1, s2, s3, s4;
    struct entry *list = &s1;
    struct entry s0 = {0, &s1};

    s1.value = 100;
    s2.value = 200;
    s3.value = 300;
    s4.value = 400;

    s1.next = &s2;
    s2.next = &s3;
    s3.next = &s4;
    s4.next = NULL;

    printList(list);
    removeEntry(list);
    list = s0.next;
    printList(list);

    return 0;
}
