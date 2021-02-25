#include <stdio.h>

int string_len(char *);
void fillWithZeroes(char *);

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

    printf("\n\n");

    char currString[maxLen + 1];

    for (int i = 0; i < countOfLines; i++)
    {
        gets(currString);

        if (string_len(currString) > minLen)
        {
            printf("%s", currString);
        }

        printf("\n\n");

        fillWithZeroes(currString);
    }
}

int string_len(char *string)
{
    int len = 0;
    for (; string[len] != '\0'; len++)
        ;
    return len + 1;
}

void fillWithZeroes(char *string)
{
    const int length = string_len(string);
    for (int i = 0; i < length; i++)
        string[i] = '\0';
}