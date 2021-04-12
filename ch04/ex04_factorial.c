// Print the first ten factorials
#include <stdio.h>

int main (void) {

    int count, result, number;
    result = 1;
    count = 10;

// Print the header
printf("number      factorial\n");
printf("---        ----------\n");

for (int i = 0; i < count; i++)
{
    
    number = ((count - i) + 1);
    
    result = 1;
    while (number > 1)
    {
        result = result * (number - 1);
        
        --number;
    }

    printf("%2i         %i\n", (count - i)  , result);
}
    

 
}