#include <stdio.h>
#include "power.h"

int main() {
    printf("Insert the base of a degree: ");
    int base;
    scanf("%d", &base);

    printf("Insert the natural indicator of a degree: ");
    int indicator;
    scanf("%d", &indicator);

    printf("Result: %.21g\n\n", power(base, indicator));
}
