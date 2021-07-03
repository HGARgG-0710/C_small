#include <stdio.h>

int main()
{
    printf("This program calculates the sum of inverses of squares (aka pi^2/6).\nPlease input accuracy: ");

    const unsigned long accuracy;
    scanf("%d", &accuracy);

    float sum = 0;

    for (double i = 1; i <= accuracy; i++)
        sum += (1 / (i * i));

    printf("Result: %0.20g", sum);
}