#include "Sub.h"

bool CheckPrime(int a)
{
    int divisor = 2;
    while (divisor < a)
    {
        if (a % divisor ==0) return false;
        divisor++;
    }
    return true;
}