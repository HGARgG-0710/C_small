#include "power.h"

float power(int x, int y) {
    float result = 1;
    int isNegative = y < 0;

    if( isNegative) {
        y = -y;
    }

    for(int i = 0; i < y; i++) {
        result *= x;
    }

    if(isNegative) {
        result = 1 / result;
    }

    return result;
}
