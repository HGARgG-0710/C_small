#include <stdio.h>
#include "general.h"

// Returns given string's length.
int string_len(char *string)
{
    int len = 0;
    for (; string[len] != '\0'; len++)
        ;
    return ++len;
}

// Fills given string with '\\0'. 
void fillWithZeroes(char *string)
{
    const int length = string_len(string);
    for (int i = 0; i < length; i++)
        string[i] = '\0';
}

// Copies all characters from the first string to the second.
void copy_str(char source[], char target[])
{
    for (int i = 0; (target[i] = source[i]) != '\0'; i++)
        ;
}

// Reverses the original string.
void reverse_str(char *string)
{
    const int stringLength = string_len(string);
    char temporary[stringLength + 1];

    int i = 0, j = stringLength - 2;

    for (; j >= 0; i++, j--)
        temporary[i] = string[j];

    copy_str(temporary, string);
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