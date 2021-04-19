#include <stdio.h>
#include <string.h>

#include "../general/general.h"

int main()
{
    const int maxSize = 0;
    const int countOfLines = 0;

    int currLength = 0;
    int largestLength = 0;

    printf("Max length of the line: ");
    scanf("%d", &maxSize);

    printf("Count of lines: ");
    scanf("%d", &countOfLines);
    getchar();

    char currLine[maxSize];
    char largestLine[maxSize];

    for (int i = 0; i < countOfLines; i++)
    {
        printf("%d. ", i + 1);
        currLength = getline(currLine, maxSize);

        if (currLength > largestLength)
        {
            largestLength = currLength;
            fillWith(largestLine, '\0');
            strcpy(largestLine, currLine);
        }
    }

    printf("\nThe longest string:\n%s", largestLine);
}
