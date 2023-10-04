#include <stdio.h>

// Prototype definitions
void printlist(struct entry *);
void insertentry(struct entry *, struct entry *);

struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};

void printlist(struct entry *list)
{

}

void insertentry(struct entry *newEntry, struct entry *listEntry)
{

}

int main()
{
    struct entry n1, n2, n3, n4, n5, n6;
    struct entry *head_pointer = &n1;
    return 0;
}