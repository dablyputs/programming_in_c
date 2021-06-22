#include <stdio.h>

struct entry 
{
    int value;
    struct entry *next;
};

void removeEntry(struct entry *);
void printList(struct entry *);

void removeEntry(struct entry *head)
{
    if (head->next != NULL)
    {
        head->next = head->next->next;
    }
    else 
    {
        head->next = NULL;
    } 
}

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

