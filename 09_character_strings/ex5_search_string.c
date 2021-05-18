// Function to search for a substring in a string
#include <stdio.h>

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

int main(void)
{
    char subString[] = "123";
    char string[] = "The 123 house with the brown fence is half way down the block";
    
    if (findString(string, subString) >= 0)
    {
        printf("found %s at positon\n", subString);
    } else {
        printf("I didn't find %s", subString);
    }
    
    return 0;
}
