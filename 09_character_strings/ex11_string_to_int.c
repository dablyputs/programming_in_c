// Function to convert a string to an integer

#include <stdio.h>
#include <stdbool.h>

int strToInt(char string[])
{
    int i, intValue, result = 0;
    bool negative = false;

    if (string[0] == '-')
    {
        i = 1;
        negative = true;
    }
    else
    {
        i = 0;
    }
    

    for (; string[i] >= '0' && string[i] <= '9'; ++i)
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }
    
    if(negative == true) result *= -1;

    return result;
}

int main(void)
{
    int strToInt(char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("13x5"));
    printf("%i\n", strToInt("-100"));
    
    return 0;
}
