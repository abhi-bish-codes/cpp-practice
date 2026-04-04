#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter integer: ";
    int num{};
    std::cin >> num;

    return num;
}

void writeAnswer(int num1, int num2)
{
    std::cout << "Their sum is " << num1 + num2 << "\n";
}