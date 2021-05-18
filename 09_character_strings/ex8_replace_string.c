// Replace a string with a substring
#include <stdio.h>

#define MAXLEN 1000

// Functions
void replaceString(char [], const char [], const char []);
int findString(const char [], const char []);
void removeString(char [], int, int);
void insertString(char [], const char [], int);
int stringLength(const char []);

void replaceString(char source[], const char subString1[], const char subString2[])
{
    int length, position;

    length = stringLength(subString1);
    if ((position = findString(source, subString1)) < 0)
    {
        return; // No match
    }
    removeString(source, position, length);
    insertString(source, subString2, position);
    
}

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
    char text[MAXLEN] = "0123456789 ten *eleven.";

	replaceString(text, "1", "one");
	replaceString(text, "ten", "10");
	replaceString(text, "*", "");
	replaceString(text, "eleven", "11");
	replaceString(text, "0", "");
	replaceString(text, "bee", "11"); /* bee is not in text */
	replaceString(text, ".", "");
	replaceString(text, " ", "");
	printf("%s\n", text);

    char string[] = "I'm number 1, you're number 2.";
    char subString1[] = "2";
    char subString2[] = "two";

    replaceString(string, subString1, subString2);
    printf("%s\n", string);
    replaceString(string, "1", "one");
    printf("%s\n", string);

	return 0;
}
