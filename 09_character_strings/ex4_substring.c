// Function to extract a substring from a string
#include <stdio.h>
#include <string.h>

void substring(char source[], int start, int count, char result[])
{   
    int j, i = start;

    for (j = 0; j < count; ++j)
    {
        if (source[i] != '\0')
        {
            result[j] = source[i];
            ++i;
        }
    }

    result[j + 1] = '\0';
}

int main()
{
    char result[80];

    substring("character", 4, 3, result);
    printf("substring is: %s\n", result);
    substring ("two words", 4, 20, result);
    printf("substring is: %s\n", result);
    
    return 0;
}
