#include <iostream>

long fib(unsigned int n);

int main()
{
    for (int i = 0; i < 10; i++) {
        std::cout << fib(i);
    }
}

long fib(unsigned int n) {
    long fibResult = n;
    long fibPrev2 = 0;
    long fibPrev1 = 1;
    for (int runs = 2; runs <= n; runs++) {
        fibResult = fibPrev1 + fibPrev2;
        fibPrev2 = fibPrev1;
        fibPrev1 = fibResult;
    }
    return fibResult;
}
        