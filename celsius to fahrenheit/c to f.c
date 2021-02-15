#include <stdio.h>

#define lower 0
#define upper 300
#define step 20

#define celsTitle "Fahrenheit"
#define fahrTitle "Celsius"

float convertFahrenheit(celsius) {
    return ((9.0/5) * celsius) + 32;
}

int main() {
    short celsius;

    printf("%s \t%s \n\n", celsTitle, fahrTitle);

    for(celsius = upper; celsius >= lower; celsius -= step) {
        printf("%6d\t %10.0f\n", celsius, convertFahrenheit(celsius));
    }
}
