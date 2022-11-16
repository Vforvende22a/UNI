#include <iostream>

void swapNumbers(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;
    swapNumbers(&firstNumber, &secondNumber);
    std::cout << firstNumber << " - swapped with - " << secondNumber;
}