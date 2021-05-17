// Function to remove a substring from a string

#include <stdio.h>

void removeString(char string[], int startIndex, int endIndex)
{
    int i, e = startIndex + endIndex;

    for (i = 0;  i < endIndex; ++i)
    {
        string[startIndex + i] = string[e];
        ++e;
    }
}

int main(void)
{
    char string[] = "the wrong son";
    printf("%s\n", string);
    removeString(string, 9, 4);
    printf("%s\n", string);
    return 0;
}
