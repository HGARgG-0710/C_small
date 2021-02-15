#include <stdio.h>

#define lower 0
#define upper 300
#define step 20

float convertCelsius(float fahrenheit) {
    return ((5.0/9) * (fahrenheit - 32));
}

int main() {
    const char fahrTitle[] = "Fahrenheit", celsTitle[] = "Celsius";
    float fahr;

    printf("%s \t%s\n\n", fahrTitle, celsTitle);

    for(fahr = upper; fahr >= lower; fahr -= step) {
        printf("%10.0f\t %6.1f\n", fahr, convertCelsius(fahr));
    }
}
