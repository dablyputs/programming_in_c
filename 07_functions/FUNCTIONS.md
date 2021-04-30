To be able to define the absoluteValue() function after the squareRoot() function (or even in another file—see Chapter 14), you must declare the type of result returned by the absoluteValue() function before the function is called. The declaration can be made inside the squareRoot() function itself, or outside of any function. In the latter case, the declaration is usually made at the beginning of the program.

You just have to specify the argument type inside the parentheses, and not its name. You can optionally specify a “dummy” name after the type if you want.

Here are some reminders and suggestions about functions:

1. Remember that, by default, the compiler assumes that a function returns an int.
2. When defining a function that returns an int, define it as such.
3. When defining a function that doesn’t return a value, define it as void.
4. The compiler converts your arguments to agree with the ones the function expects only if you have previously defined or declared the function.
5. To play it safe, declare all functions in your program, even if they are defined before they are called. (You might decide later to move them somewhere else in your file or even to another file.)


If a function changes the value of an array element, that change is made to the original array that was passed to the function. This change remains in effect even after the function has completed execution and has returned to the calling routine. The discussion about changing array values in a function applies only to entire arrays that are passed as arguments, and not to individual elements, whose values are copied into the corresponding formal parameters and, therefore, cannot be permanently changed by the function.

Helpful discussion for ambiguous or confusing instructions on exercise 4:

https://stackoverflow.com/questions/38465282/comparing-the-ratio-of-two-values-to-1

https://www.reddit.com/r/cs50/comments/21gy72/suggested_reading_i_am_having_a_little_trouble/