// Function to remove a substring from a string

#include <stdio.h>


// Functions
void removeString(char [], int, int);
int stringLength(const char []);
void removeString(char source[], int position, int nCharacters)
{
    int i, length;

    // copy characters (including '\0') from index i to pos 
    length = stringLength(source);
    for (i = position + nCharacters; i <= length; ++i)
    {
        source[position++] = source[i];
    } 
}

int stringLength(const char string[])
{
    int stringSize;
    
    for (stringSize = 0; string[stringSize] != '\0'; ++stringSize)
        ;

    return stringSize;
}

int main(void) 
{	
	char str[] = "the wrong son";

	removeString(str, 10 , 3);
	printf("%s\n", str); 

	return 0;
}
