#include <stdio.h>
#include <string.h>
#include "../general/general.h"

int main()
{
    const int minLen;
    const int maxLen;
    const int countOfLines;

    printf("Enter min string length: ");
    scanf("%d", &minLen);

    printf("Enter max string length: ");
    scanf("%d", &maxLen);

    printf("Enter count of strings: ");
    scanf("%d", &countOfLines);

    getchar();

    printf("\n");

    char currString[maxLen + 1];

    for (int i = 0; i < countOfLines; i++)
    {
        printf("%d. ", i + 1);
        gets(currString);

        if (strlen(currString) > minLen)
            printf("%s\n", currString);

        printf("\n");

        fillWith(currString, '\0');
    }
}
