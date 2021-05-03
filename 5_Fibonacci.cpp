#include <iostream>

long fib(unsigned int n);

int main()
{
}

long fib(unsigned int n) {
    long fibResult = 0;
    long fibPrev2 = 0;
    long fibPrev1 = 1;
    for (int runs = 1; runs < n; runs++) {
        if (runs == 2) {
            continue;
        }
        fibResult = fibPrev1 + fibPrev2;
        fibPrev2 = fibPrev1;
        fibPrev1 = fibResult;
    }
    return fibResult;
}
        