#include <iostream>

int doubleNumber(int num)
{
	return num * 2;
}

int getValue()
{
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	return num;
}

int main()
{
	int num = getValue();
	std::cout << "Double of " << num << " is: " << doubleNumber(num) << "\n";
	
	return 0;
}
