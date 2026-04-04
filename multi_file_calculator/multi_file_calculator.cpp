#include <iostream>
#include <cstdio>

//Declaring functions used
int getInteger();
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
    //Input 2 integers from user and store them in x and y
    int x{getInteger()};
    int y{getInteger()};

    std::cout << "=========================================================\n";

    //Calculations
    std::cout << x << " + " << y << " is " << add(x,y) << "\n";
    std::cout << x << " - " << y << " is " << subtract(x,y) << "\n";
    std::cout << x << " * " << y << " is " << multiply(x,y) << "\n";
    std::cout << x << " / " << y << " is " << divide(x,y) << "\n";

    std::cout << "=========================================================\n";

    //Stops terminal for closing instantly
    std::cout << "Enter any key to exit...\n";
    std::getchar();
    char character{};
    std::cin >> character;

    return 0;
}