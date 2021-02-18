#include <stdio.h>
#include <math.h>
#include "./../../input_vars/input_vars.h"

#define len 3

int main()
{
    // Counters
    int i = 0;

    // Constants
    const float time;
    const float acceleration;

    // Physics variables
    float velocity = 0;
    float path = 0;

    // Arrays for storing data
    const float *pointers[len] = {&time, &acceleration, &velocity};
    const char measurments[len][5] = {"s", "m/s2", "m/s"};
    const char strings[len][17] = {
        "total time",
        "acceleration",
        "start velocity",
    };

    for (; i < len; i++)
    {
        inputFloatVar(strings[i], measurments[i], pointers[i]);
    }

    path = velocity * time + acceleration * pow(time, 2) / 2;
    printf("\ntotal path (m): %.2f", path);
}