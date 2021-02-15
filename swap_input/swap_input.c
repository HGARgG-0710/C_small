#include <stdio.h>
#include <string.h>

#define EOL '\n'
#define message_length 256

int main() {
    char currChar;
    char symbolCount = 0;

    char message[message_length];
    char sweptMessage[message_length];

    for(; (currChar = getchar()) != EOL && symbolCount < message_length; symbolCount++) {
        message[symbolCount] = currChar;
    }

    for(char count = 0; count < strlen(message); count++) {
        sweptMessage[count] = message[strlen(&message) - (1 + count)];
    }

    printf(sweptMessage);
    printf("\nCounted symbols: %d\n", symbolCount);
}
