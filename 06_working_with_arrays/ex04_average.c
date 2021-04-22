#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numToAvg[10], num;

    printf("Enter ten numbers and I will average them: ");

    for (size_t i = 0; i < 10; ++i)
    {
        scanf("%f", &numToAvg[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        num += numToAvg[i];
    }
    
    printf("The average is %f\n", (num / 10));
    
    return 0;
}
