#include <stdio.h>
#include "../general/general.h"

int main(int argc, char *argv[])
{
    const int size;

    printf("Please, enter the size of the array, that will be generated with the step 1 and the starting point 0: ");
    scanf("%d", &size);

    int numbers[size];
    generate(numbers, size, 1, size + 1, 1);

    const int primes_len = how_many_primes(numbers, size);
    int primes[primes_len];
    get_primes(primes, numbers, size);

    for (int i = 0; i < primes_len; i++)
        printf("%d: %d\n", i, primes[i]);
}