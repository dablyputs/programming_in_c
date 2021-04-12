// Print the first ten factorials
#include <stdio.h>

int main (void) {
    // obviously bad variable naming
    int count, result, number;
    result = 1;
    count = 10;

// Print the header
printf("number      factorial\n");
printf("---        ----------\n");

for (int i = 0; i < count; i++)
{
    // Before i is incremented we have to add 1
    number = ((count - i) + 1);
    
    result = 1;
    while (number > 1)
    {
        result = result * (number - 1);
        
        --number;
    }
    // After i is incremented 
    printf("%2i         %i\n", (count - i)  , result);
}
    

 
}