## Pointers and Indirection

 * A pointer provides an indirect means of accessing the value of a particular data item.

## Defining a Pointer Variable
 * The unary operator, known as the address operator, is used to make a pointer to an object in C. So, if x is a variable of a particular type, the expression &x is a pointer to that variable. The expression &x can be assigned to any pointer variable, if desired, that has been declared to be a pointer to the same type as x.

 * When you define a pointer that points to the elements of an array you designate the pointer as pointing to the type of element contained in the array. Eg:
     
    int *valuesPtr;

is used to point to an array of integers whereas: 

    char *textPtr;

would be used to point to an array containing char values or strings.

To set valuesPtr to point to the first element of the values array, you simply write:

    valuesPtr = values;

The address operator isn't used in this case because the C compilter treats the appearance of an array name without a subscript as a pointer to the array. It is effectively the equivalent of:

    valuesPtr = &values[0];

Here is the char array example:

     textPtr = text;
or
     textPtr = &text[0];

Which you choose is a matter of taste.