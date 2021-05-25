/* 
 * Using the findString(), removeString(), and insertString() functions from
 * preceding exercises, write a function called replaceString() that takes
 * three character string arguments
 */

#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 1000

// Functions
bool replaceString(char [], const char [], const char []);
int findString(const char [], const char []);
void removeString(char [], int, int);
void insertString(char [], const char [], int);
int stringLength(const char []);

// replace subString1 with subString2 in source
bool replaceString(char source[], const char subString1[], const char subString2[])
{
    int length, position;

    length = stringLength(subString1);
    if ((position = findString(source, subString1)) < 0)
    {
        return false; // No match
    }
    removeString(source, position, length);
    insertString(source, subString2, position);

    return true;
    
}

// return subString index postion in source if found else return -1
int findString(const char source[], const char subString[])
{
    int i, j, k;

    for (i = 0; source[i] != '\0'; i++)
    {
        for (j = i, k = 0; source[j] != '\0' && source[j] == subString[k]; ++j, ++k )
            ;
        if (subString[k] == '\0') // Found match
        {
            return i; // Return position of match
        }     
    }
    return -1; // Not found
}

// remove nCharacters from source starting at position
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

// insert subString into string at position
void insertString(char source[], const char subString[], int position)
{
    int i, length, offset;

    length = stringLength(source);
    if (position > length)
    {
        return; // do nothing
    }
    
    /* make room for subString my moving characters (including '\0') from the end
    *  of string to the right by distance equal to length */
   offset = stringLength(subString);
   for (i = length + 1; i >= position; --i)
   {
       source[i + offset] = source[i];
   }
   
   //copy subString into source at position
   for (i = 0; subString[i] != 0; ++i, ++position)
   {
       source[position] = subString[i];
   }
   
}

// return the length of string
int stringLength(const char string[])
{
    int stringSize;
    
    for (stringSize = 0; string[stringSize] != '\0'; ++stringSize)
        ;

    return stringSize;
}

int main(void)
{
    int stillFound;
    char text[] = "a l p h a b e t";

    do
    {
        stillFound = replaceString(text, " ", "");
    } while (stillFound);
    
    printf("%s\n", text);

	return 0;
}
