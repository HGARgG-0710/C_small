#include <stdio.h>
#define EOL '\n'

int main() {
    int spaces = 0, tabs = 0;

    for(char currentChar; (currentChar = getchar()) != EOL;) {
        switch(currentChar) {
        case ' ': spaces++; break;
        case '\t': tabs++; break;
        }
    }

    printf("Spaces: %5d\nTabs: %7d\n", spaces, tabs);
}
