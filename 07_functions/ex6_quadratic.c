// Program to solve a quadratic equation

#include <stdio.h>

double absoluteValue(double x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}

double squareRoot(double x)
{

    double guess = 1;
    double ratio = 2;
    const double epsilon = .000001;

        while (ratio >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
        // This answer came from Brenda at Harvard CS50 on Reddit. Link in notes.
        ratio = absoluteValue(x / (guess * guess) - 1);
    }

    return guess;
}

float quadratic(double a, double b, double c)
{
    double discriminant, root1, root2, realPart, imagPart;
    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + squareRoot(discriminant)) / (2 * a);
        root2 = (-b - squareRoot(discriminant)) / (2 * a);
        printf("root1 = %.3lf and root2 = %2lf\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %2lf\n", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = squareRoot(-discriminant) / (2 * a);
        printf("root1 = %2lf + %2lfi and root2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
    
    

    return 0;
}

int main(int argc, char const *argv[])
{
    double a, b, c;

    printf("Enter coeffcients for a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    quadratic(a, b, c);

    return 0;
}
