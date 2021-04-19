#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "general.h"

// Fills given string with given symbol.
void fillWith(char *string, char symbol)
{
    int i = 0;
    for (; i < strlen(string); i++)
        string[i] = symbol;
    string[i] = '\0';
}

// Reverses the original string.
void reverse_str(char *string)
{
    const int stringLength = strlen(string);
    char temporary[stringLength + 1];
    int i = 0, j = stringLength - 2;

    for (; j >= 0; i++, j--)
        temporary[i] = string[j];

    strcpy(string, temporary);
    string[i] = '\0';
}

// Returns length of the got line.
int getline(char line[], int maxlen)
{
    char currChar;
    int i = 0;

    for (; (currChar = getc(stdin)) != '\n' && i < maxlen; i++)
        if (i + 1 < maxlen)
            line[i] = currChar;

    line[i] = '\0';

    return i;
}

// Splits string[] by the delim[] and stores the results into **tokens.
void split_str(char string[], char delim[], char **tokens)
{
    char *token = strtok(string, delim);
    strcpy_s(tokens[0], _countof(tokens[0]), token);

    printf("Hello.");

    int i = 1;
    do
    {
        token = strtok(NULL, delim);
        strcpy_s(&tokens[i], _countof(&tokens[i]), token); // ! Problem is here, namely - the first argument(or maybe the second, or both).
        printf("Hello %d", i);
        i++;
    } while (token != NULL);
    printf("End of cycle");
}

// Takes the string and makes it lowercase.
void lowercase(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = tolower(string[i]);
    }
}

// Takes the string and makes it uppercase.
void uppercase(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = toupper(string[i]);
    }
}

// Takes the pointer array **source and returns how often does search_str appears in there.
int how_often_appears(char **source, char *search_str, int source_strs)
{
    int times = 0;

    for (int i = 0; i < source_strs; i++)
        if (are_equal(source[i], search_str))
            times++;

    return times;
}

// Checks if str1 equals str2. Returns 0 or 1.
int are_equal(char *str1, char *str2)
{
    int are = strlen(str1) == strlen(str2);

    for (int i = 0; i < strlen(str1); i++)
        if (str1[i] != str2[i])
            are = 0;

    return are;
}