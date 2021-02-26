#include <stdio.h>
#include "resources/resources.h"

#define lower 0
#define upper 300
#define step 20

#define celsTitle "Fahrenheit"
#define fahrTitle "Celsius"

int main()
{
    float fahr;

    printf("%s \t%s\n\n", fahrTitle, celsTitle);

    for (fahr = upper; fahr >= lower; fahr -= step)
        printf("%10.0f\t %6.1f\n", fahr, convertCelsius(fahr));
}
