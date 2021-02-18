#include <stdio.h>

void inputIntVar(const char input_words[], const int *var, const char measurments[])
{
    printf("%s (%s): ", input_words, measurments);
    scanf("%d", &(*var));
}

int main()
{
    // Counters
    int i = 0;

    // Constants
    const int time;
    const int acceleration;

    // Physics variables
    int velocity = 0;
    int path = 0;

    // Arrays for storing data
    const int *pointers[3] = {&time, &acceleration, &velocity};
    const char measurments[3][5] = {"s", "m/s2", "m/s"};
    const char strings[3][17] = {
        "total time",
        "acceleration",
        "start velocity",
    };

    for (; i < 3; i++)
    {
        inputIntVar(strings[i], pointers[i], measurments[i]);
    }

    for (i = 0; i < time; i++)
    {
        path += velocity;
        velocity += acceleration;
    }

    printf("total path (m): %d", path);
}