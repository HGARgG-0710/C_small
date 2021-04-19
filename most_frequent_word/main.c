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

    for (char currChar; (currChar = getc(input)) != EOF; input_len++)
        switch (currChar)
        {
        case ' ':
            countOfWords++;
            break;

        case '\n':
        case '\t':
            input_len--;
        }

    rewind(input);

    const int input_length = input_len + 1;
    const int all_words = countOfWords + 1;

    char input_arr[input_length];
    char **words;

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
    split_str(input_arr, " ", words);
    printf("\n\nString: %s\n\n", words[1]);

    char *mostFrequentWord;
    char *currWord;

    char *lowerFrequent;
    char *lowerCurr;

    int timesFound = 0;
    int currTimes = 0;

    for (int i = 0; i < countOfWords; i++)
    {
        if (i > 0)
        {
            strcpy(lowerCurr, currWord);
            lowercase(lowerCurr);

            strcpy(lowerFrequent, mostFrequentWord);
            lowercase(lowerFrequent);

            if (lowerCurr == lowerFrequent)
                continue;
        }

        strcpy(currWord, words[i]);
        currTimes = how_often_appears(words, mostFrequentWord, countOfWords);

        if (currTimes > timesFound)
        {
            strcpy(mostFrequentWord, currWord);
            timesFound = currTimes;
        }
    }

    fprintf(output, "%s %d", mostFrequentWord, timesFound + 1);

    fclose(input);
    fclose(output);
}