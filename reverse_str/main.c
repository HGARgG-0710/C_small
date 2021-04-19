#include <stdio.h>
#include "../general/general.h"

int main()
{
    const int maxLength;
    const int countOfLines;

    printf("Enter the max length of the strings you are going to provide to the program: ");
    scanf("%d", &maxLength);

    char currString[maxLength];

    printf("Enter the count of strings you are going to provide: ");
    scanf("%d", &countOfLines);
    getchar();

    for (int i = 0; i < countOfLines; i++)
    {
        printf("\n%d. ", i + 1);
        gets(currString);
        reverse_str(currString);

        printf("%s", currString);
        fillWith(currString, '\0');

        printf("\n");
    }
}
