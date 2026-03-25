#include <iostream>

int getInteger();
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
    int x{getInteger()};
    int y{getInteger()};
    std::cout << x << " + " << y << " is " << add(x,y) << "\n";
    std::cout << x << " - " << y << " is " << subtract(x,y) << "\n";
    std::cout << x << " * " << y << " is " << multiply(x,y) << "\n";
    std::cout << x << " / " << y << " is " << divide(x,y) << "\n";

    return 0;
}