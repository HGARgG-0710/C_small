/// This program is not valid enough! It counts
/// only radical cases of developing a character
/// in Disco Elysium(Like [2, 6, 2, 2] or [8, 1, 1, 1] and etc).
/// It must be completed!

#include <stdio.h>

int isOverMax(int[], const int, const int);

int main()
{
    unsigned int count = 0;
    const int maxSum = 12;
    const int length = 4;

    int testArr[length];

    for (int i = 0; i < length; i++)
        testArr[i] = 1;

    for (char currNum = 1; currNum <= 4; currNum++)
        for (int i = 0; i < length; i++)
        {
            while (!isOverMax(testArr, length, maxSum))
            {
                testArr[i]++;
                count++;
            }

            testArr[i] = currNum;
        }

    printf("Max count of possible Disco Elysium character builds: %d\n\n", count);
}

int isOverMax(int arr[], const int arrLength, const int max)
{
    int sum = 0;

    for (int i = 0; i < arrLength; sum += arr[i], i++)
        ;

    return sum > max;
}
