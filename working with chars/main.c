#include <stdio.h>

int getline(char line[], int len) {
    char currChar;
    int i = 0;

    for(; (currChar = getc(stdin)) != '\n' && i < len; i++) {
        if(i + 1 < len) line[i] = currChar;
        else line[i] = '\0';
    }

    return i;
}

void copy(char source[], char target[]) {
    for(int i = 0; (target[i] = source[i]) != '\0'; i++);
}

int main() {
    int maxSize = 0;
    int countOfLines = 0;

    int currLength = 0;
    int largestLength = 0;

    printf("Max length of the line: ");
    scanf("%d", &maxSize);

    printf("Count of lines: ");
    scanf("%d", &countOfLines);
    scanf("%c"); // Skipping the '\n'

    char currLine[maxSize];
    char largestLine[maxSize];

    for(int i = 0; i < countOfLines; i++) {
        printf("%d. ", i + 1);
        currLength = getline(currLine, maxSize);

        if(currLength > largestLength) {
            largestLength = currLength;
            copy(currLine, largestLine);
        }
    }

    printf("\n%s", largestLine);
}
