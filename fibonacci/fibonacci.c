#include <stdio.h>
#include <stdlib.h>
#include "../general/general.h"

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    long fib = fibonacci(num);
    printf("\nFibbonaci number: %ld", fib);
}