// Function to remove a substring from a string

#include <stdio.h>

void removeString(char string[], int startIndex, int endIndex)
{
    int i, e = startIndex + endIndex;
    static char tempString[80];
    tempString[0] = '\0';

    for (i = 0;  string[startIndex + i] != '\0'; ++i)
    {
        tempString[i] = string[e];
        printf("I'm writing %c to %s\n", string[e], tempString);
        ++e;
    }

    tempString[i] = '\0';
}

int main(void)
{
    char string[] = "the wrong son";
    printf("%s\n", string);
    removeString(string, 4, 6);
    printf("%s\n", string);
    removeString(string, 0, 4);
    printf("%s\n", string);
    //removeString(string, 0, 3);
    //printf("%s\n", string);
    return 0;
}
