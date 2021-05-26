# Chapter 10: Pointers
At times, system programmers must access particular locations inside the computer's memory. One of the advantages of a higher level programming language such as C is that, although you don't have to concern yourself the memory addresses that ar assigned to variables, the knowledge that a unique memory address is associated with each variable and can be accessed through the use of pointers adds power and flexibility to the language.  

The topic of pointers is difficult to grasp. Reread any sections of Chapter 10 that are still unclear.

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

## Constant Character Strings and Pointers
When a constant character string is passed as a function argument, what is actually passed is a pointer to the characxter string. Whever a constant chracter string is used in C, it is a pointer to that character string that is produced. Eg:

    char *textPtr;
    textPtr = "A character string.";
   

assigns to <em>textPtr</em> a pointer to the constant character string "A character string." This type of assignment is not valid with a character array. Eg:

    char text[80];
    text = "This is not valid.";


is an invalid assignment statement. The only time C will permit this type of assignment to a character array is when initializing it. Eg:

    char text[80] = "This is okay.";

Initializing an array in this manner does not store a pointer to the string "This is okay." It produces a pointer to the actual characters themselves inside the elements of the <em>text</em> array. Eg:

    char *text = "This is okay.";

assigns to <em>text</em> a pointer to the character string "This is okay."

A very helpful article on the subject of pointers to strings and constant character strings comes from [Carnegie Melon University](https://wiki.sei.cmu.edu/confluence/display/c/STR05-C.+Use+pointers+to+const+when+referring+to+string+literals)

## Operations on Pointers
The confusion with pointers seems to boil down to operations performed on the pointer itself vs operations performed on the value which is pointed to. The location in memory, i.e. the pointer, can be manipulated by incrementing, decrementing or doing pointer arithematic whereas the value pointed to can be manipulated through the pointer based on whatever valid operations are permitted by the value being pointed to.

### Pointer Subtraction
Subtracting two pointers of the same type returns the result of the number of elements containted between the two pointers. E.g.:

    n = p - x

assigns to n (assumed to be an integer) the index number of the element inside x to which p points. See example [example 10.15](https://github.com/dablyputs/programming_in_c/blob/main/10_pointers/10_15_string_length.c)

## Pointers to Functions
Pointers to functions is an advanced technique and the syntax can be tricky. One common application is passing them as argument sto other functions. This technique is applied in the C Standard Library in the function qsort which takes a user supplied function which compares two elements in an array. 

* [qsort on Tutorials Point](https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm)
* [qsort on Wikipedia](https://en.wikipedia.org/wiki/Qsort)
* [qsort on Geeks for Geeeks](https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/)

Another common application is to create <em>dispatch</em> tables where pointers to functions are stored as elements in an array.

* [Dispatch Tables on Wikipedia](https://en.wikipedia.org/wiki/Dispatch_table)
* [Blog Entry on Dispatch Tables in C](https://blog.alicegoldfuss.com/function-dispatch-tables/)