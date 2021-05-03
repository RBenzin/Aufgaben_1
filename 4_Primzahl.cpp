#include <iostream>

bool prim(unsigned int n);

int main()
{
}

bool prim(unsigned int n) {
    for (int divisorChecked = 2; divisorChecked < (n / 2); divisorChecked++) {
        if ((n % divisorChecked) == 0) {
            return false;
        }
    }
    return true;
}