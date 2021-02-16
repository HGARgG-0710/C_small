#include <stdio.h>
#include "power.h"

int main() { 
    int base;
    int indicator;

    printf("Insert the base of a degree: ");
    scanf("%d", &base);

    printf("Insert the natural indicator of a degree: ");
    scanf("%d", &indicator);

    printf("Result: %.21g\n\n", power(base, indicator));
}
