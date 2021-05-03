#include <iostream>

long getSum(int endNumber);

int main()
{
    std::cout << getSum(5);
}

long getSum(int endNumber) {
    long sum = 0;
    for (int stepsCalculated = 1; stepsCalculated <= endNumber; stepsCalculated++) {
        sum += stepsCalculated;
    }
    return sum;
}