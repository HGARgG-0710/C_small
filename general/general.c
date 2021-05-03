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

// Splits string[] by the delim[] and stores the results into tokens[n][m].
void split_str(char string[], char delim[], int n, int m, char tokens[n][m])
{
    char *token = strtok(string, delim);
    strcpy(tokens[0], token);

    int i = 1;
    do
    {
        token = strtok('\0', delim);
        if (token == NULL)
            break;
        strcpy(tokens[i], token);
        i++;
    } while (token != NULL);
}

// Takes the string and makes it lowercase.
void lowercase(char *string)
{
    for (int i = 0; i < strlen(string); i++)
        string[i] = tolower(string[i]);
}

// Takes the string and makes it uppercase.
void uppercase(char *string)
{
    for (int i = 0; i < strlen(string); i++)
        string[i] = toupper(string[i]);
}

// Takes the pointer array source and returns how often does search_str appears in there.
int how_often_appears(char *search_str, int source_strs, int symbs, char source[source_strs][symbs])
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

// Takes the number and checks if it's a prime.
int is_prime(int number)
{
    int half = number >> 1;
    int is_prime = 1;

    for (int i = 2; i <= half; i++)
        if (number % i == 0)
            is_prime = 0;

    return number >= 2 ? is_prime : 0;
}

// Takes two arrays and the length of the second one, one of numbers(they are already there), other for primes(this one should be empty). Fills the primes array with the prime numbers from the first one.
void get_primes(int primes[], int numbers[], int length)
{
    int arr[length];
    copy_arr(numbers, arr, length);

    for (int i = 0, j = 0; i < length; i++)
        if (numbers[i] != 0 && is_prime(numbers[i]))
        {
            primes[j] = arr[i];

            for (int k = i; k < length; k++)
                if (arr[k] != 0 && arr[k] % primes[j] == 0)
                    arr[k] = 0;

            j++;
        }
}

// Fills given integers array with numbers from start to limit.
void generate(unsigned int arr[], const unsigned int length, const unsigned int start, const unsigned int limit, const int step)
{
    if (step < 0)
    {
        for (int i = 0, j = start; j > limit && i < length; i++, j += step)
            arr[i] = j;
    }
    else
    {
        for (int i = 0, j = start; i < length && j < limit; i++, j += step)
            arr[i] = j;
    }
}

// Function that takes an integer array and returns how many primes are in this array.
int how_many_primes(int numbers[], int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
        if (is_prime(numbers[i]))
            count++;

    return count;
}

// Takes two arrays and copies the contents of the one into another.
// * P.S. It is assumed that arrays are of the same length or the copy is bigger. If not, then the errors may occur.
void copy_arr(int arr[], int copy[], int length)
{
    for (int i = 0; i < length; i++)
        copy[i] = arr[i];
}