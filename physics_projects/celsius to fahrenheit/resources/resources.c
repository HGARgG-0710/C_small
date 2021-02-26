#include "resources.h"

float convertFahrenheit(short celsius)
{
    return ((9.0 / 5) * celsius) + 32;
}

float convertCelsius(float fahrenheit)
{
    return ((5.0 / 9) * (fahrenheit - 32));
}
