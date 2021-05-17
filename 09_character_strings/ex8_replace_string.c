// Replace a string with a substring
#include <stdio.h>
#include <stdbool.h>

int findString(char string[], char subString[])
{
    int i, j, position;
    position = -1;
    j = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
        if (subString[j] == string[i])
        {
            position = i;
            while (position != -1)
            {
                if (subString[j] == '\0')
                { // Matched to end of substring, return
                    return position;
                }
                else if (subString[j] == string[position + j])
                { // Keep going if we match 
                    ++j;
                }
                else
                { // Not a match, start over and return 
                    j = 0;
                    position = -1;
                }
            }   
        }
    }

    return position;
}

void removeString(char string[], int startIndex, int endIndex)
{
    int i, e = startIndex + endIndex;

    for (i = 0;  string[startIndex + i] != '\0'; ++i)
    {
        printf("Inside removeString I'm overwriting %c with %c to create %s\n",string[startIndex + i], string[e], string);
        string[startIndex + i] = string[e -2 ];
        ++e;
    }
}


void insertString(char string[], char subString[], int position)
{
    char tempString[80];
    int i, j = 0;
    int stringLength(char string[]);

    // Capture the characters in substring positon
    for (i = position; string[i] != '\0'; ++i)
    {
        tempString[j] = string[i];
        ++j;
    }
    printf("tempString is %s\n",tempString);
    //tempString[j + 1] = '\0';

    // Reset position
    i = position;
    
    // Append substring to string
    for (j = 0; string[i] != '\0'; ++j)
    {
        string[i] = subString[j];
        ++i;
    }
    
    string[i] = '\0';
    printf("inside insertString, string is now %s, i is equal to %i and j is equal to %i\n", string, i, j);
    
    // Append tempString to string
    i = position + stringLength(subString);
    
    for (j = 0; tempString[j] != '\0'; ++j)
    {
        string[i] = tempString[j];
        //printf("appending %c to  %s\n", tempString[j], string);
        ++i;
    }
    string[i] = '\0';
    
    
}

int stringLength(char string[])
{
    int stringSize;
    
    for (stringSize = 0; string[stringSize] != '\0'; ++stringSize)
    {
        continue;
    }
    
    return stringSize;
}

void replaceString(char string[], char subString1[], char subString2[])
{
    int startPosition = findString(string, subString1);
    printf("I'm going to start writing at character %i\n", startPosition);
    int endPosition = stringLength(subString2);
    printf("I'm going to append %i characters\n", endPosition);

    if (startPosition > -1)
    {
        printf("At the beginning string is: %s\n",string);
        removeString(string, startPosition, endPosition);
        printf("After removeString, string is now %s\n", string);
        insertString(string, subString2, startPosition);
        printf("String is now %s", string);
    }
}

int main(void)
{
    
    char string[] = "I'm number 1, you're number 2.";
    char subString1[] = "2";
    char subString2[] = "two";

    replaceString(string, subString1, subString2);


    return 0;
}
