// Display the result of dividing two integers
#include <stdio.h>

int main(void)
{
    float a,b;

    printf("Enter two integers. I will divid the second by the first: ");
    scanf("%f %f", &a, &b);
    
    if ( a == 0){
        printf("Division by zero\n");
    }
    else {
        printf("%i divided by %i is %.3f\n", (int) b, (int) a, (b / a));
    }

    return 0;
}
