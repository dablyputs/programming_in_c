// Program to calculate the absolute value of an integer

#include <stdio.h>

float absoluteValue (float number){

    if (number < 0){
        number = -number;
    }

    return number;
}

int main(int argc, char const *argv[])
{
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float result;

    result = absoluteValue(f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);

    result = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %2f\n", result);

    result = absoluteValue((float) i1);
    printf("result = %2f\n", result);

    result = absoluteValue(i1);
    printf("result = %2f\n", result);

    printf("%2f\n", absoluteValue(-6.0) / 4);

    return 0;
}