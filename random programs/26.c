#include <stdio.h>

int main()
{
    long long num = 0;
    long long multiplier = 1;

    for(int i = digitsSize - 1; i >= 0; i--) {
    num += digits[i] * multiplier;
    multiplier *= 10;
    }

    num++;

    // Count digits in the new number
    long long temp = num;
    int length = 0;

    do {
        length++;
        temp /= 10;
    } while(temp != 0);
    return 0;
}