# Chapter 8: Working With Structures

### Structure Variants
You can declare instances of a structure at the time it is defined.

eg:

    struct date
    {
        int month;
        int day;
        int year;
    } todaysDate, purchaseDate; 

defines the structure date and the variable todaysDate with initial values as indicated.

If all of the variables of a particular structure type are defined when the structure is defined, the structure name can be omitted. So the statement

    struct
    {
        int month;
        int day;
        int year;
    } dates[100];

defines an array called dates to consist of 100 elements. Because you did not supply a name to the structure, the only way to subsequently declare variables of the same type is by explicitly defining the structure again.
