// Function to search for a substring in a string
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

int main(void)
{
    
    char subString[] = "cat";
    char string[] = "The 123 house with the brown fence is half way down the block";
    
    if (findString(string, subString) >= 0)
    {
        printf("found %s\n", subString);
    } else {
        printf("I didn't find %s", subString);
    }
    
    return 0;
}
