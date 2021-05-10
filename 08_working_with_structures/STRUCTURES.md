# Chapter 8: Working With Structures

### Structure Variants
You can declare instances of a structure at the time it is defined.

eg:

`struct date\
{
    int month;\
    int day;\
    int year;\
} todaysDate, purchaseDate;\ `

is legal. So is:

`struct
{
    int month;
    int day;
    int year;
} dates[100];`
