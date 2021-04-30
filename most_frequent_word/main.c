#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "../general/general.h"

int main(int argc, char *argv[])
{
    FILE *input = fopen(argv[1], "r"); // * Custom input file name
    FILE *output = fopen(argv[2], "w"); // * Custom output file name

    int input_len = 0;
    int countOfWords = 1;

    int currLength = 0;
    int largestLength = 0;

    for (char currChar; (currChar = getc(input)) != EOF; input_len++)
        switch (currChar)
        {
        case ' ':
            largestLength = currLength > largestLength ? currLength : largestLength;
            countOfWords++;
            break;

        case '\n':
        case '\t':
            input_len--;
        
        default:
            currLength++;
        }

    rewind(input);

    const int input_length = input_len + 1;
    const int all_words = countOfWords + 1;
    const int big_len = largestLength + 1;

    char input_arr[input_length];
    char words[all_words][big_len];

    char currChar;
    for (int i = 0; i < input_len && (currChar = getc(input)) != EOF; i++)
    {
        if (currChar == '\t' || currChar == '\n')
        {
            i--;
            continue;
        }
        input_arr[i] = currChar;
    }

    rewind(input);
    split_str(input_arr, " ", all_words, big_len, words);

    char mostFrequentWord[big_len];
    char currWord[big_len];
    
    int timesFound = 0;
    int currTimes = 0;

    for (int i = 0; i < all_words; i++) {
        lowercase(words[i]);
    }

    for (int i = 0; i < countOfWords; i++)
    {
        strcpy(currWord, words[i]);
        currTimes = how_often_appears(currWord, all_words, big_len, words);

        if (currTimes > timesFound)
        {
            strcpy(mostFrequentWord, currWord);
            timesFound = currTimes;
        }
    }

    fprintf(output, "%s %d\n", mostFrequentWord, timesFound);

    fclose(input);
    fclose(output);
}