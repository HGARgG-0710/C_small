#include <stdio.h>

#define EOL '\n'
#define EOW ' '
#define TAB '\t'
#define arrLen 16

int main()
{
    char words[arrLen][arrLen];
    char currentChar;

    for (char word = 0, aChar = 0; (currentChar = getchar()) != EOL && (word < arrLen && aChar < arrLen);)
    {
        if (currentChar == EOW || currentChar == TAB)
        {
            word++;
            aChar = 0;
            continue;
        }
        else
        {
            words[word][aChar] = currentChar;
            aChar++;
        }
    }

    for (char i = 0, j = 0; i < sizeof(words) / sizeof(words[i]); i++, j = 0)
    {
        for (; j < sizeof(words[i]) && words[i][0] != '\0'; j++)
            printf("%c", words[i][j]);

        if (words[i][0] != '\0')
            printf("\n");
    }
}
