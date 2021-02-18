#include <stdio.h>
#include "input_vars.h"

void inputIntVar(const char input_words[], const char measurments[], const int *var)
{
    printf("%s (%s): ", input_words, measurments);
    scanf("%d", &(*var));
}

void inputFloatVar(const char input_words[], const char measurments[], const float *var)
{
    printf("%s (%s): ", input_words, measurments);
    scanf("%f", &(*var));
}

int getYorN(const char question[])
{
    const char answer;

    printf("%s (y/n): ", question);
    scanf("%c", &answer);
    scanf("%c", &answer); // Skipping '\n'. Maybe I'll need to get rid of it later.

    return answer == 'y';
}