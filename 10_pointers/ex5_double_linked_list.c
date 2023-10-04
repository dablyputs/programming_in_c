/*
    Define a doubly linked list entry and then write a small program that implements 
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
void insertentry(struct entry *, struct entry *);

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