// Function to insert a substring into string

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void insertString(char string[], char subString[], int position)
{
    char tempString[80];
    int i, j = 0;

    // Capture the characters in substring positon
    for (i = position; alphabetic(string[i]); ++i)
    {
        tempString[j] = string[i];
        ++j;
    }

    tempString[j] = '\0';

    // Reset position
    i = position;
    
    // Append substring to string
    for (j = 0; alphabetic(string[i]); ++j)
    {
        string[i] = subString[j];
        ++i;
    }

    string[i] = '\0';
    
    for (j = 0; tempString[j] != '\0'; ++j)
    {
        string[i] = tempString[j];
        ++i;
    }

    string[i] = '\0';

    
}

int main(void)
{
    char string[80] = "the wrong son";
    printf("string = %s\n", string);
    insertString(string, "per", 10);
    printf("string = %s\n", string);

    return 0;
}
