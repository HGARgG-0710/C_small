#include <stdio.h>

#define EOL '\n'

int main()
{
    char currentChar;
    unsigned char hasMet[] = {0, 0};

    while ((currentChar = getchar()) != EOL)
    {
        switch (currentChar)
        {
        case ' ':
            if (hasMet[0] == 1)
                continue;
            hasMet[0] = 1;
            break;

        case '\t':
            if (hasMet[1] == 1)
                continue;
            hasMet[1] = 1;
            break;

        default:
            hasMet[0] = 0, hasMet[1] = 0;
        }

        putchar(currentChar);
    }

    printf("\n");
}
