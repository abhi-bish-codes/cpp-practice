#include <iostream>
#include <string>
#include <string_view>

std::string get_name(std::string_view number)
{
    std::cout << "Enter the name of person #" << number << ": ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int get_age(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;

    return age;
}

int main()
{
    std::cout << "====================INSTRUCTIONS====================\n";
    std::cout << "Enter \"exit\" or \"quit\" as a name to end the program.\n";
    std::cout << "====================================================\n\n";

    while (true){
        std::string p1 {get_name("1")};
        if (p1 == "quit" | p1 == "exit") {break;}
        int a1 {get_age(p1)};
    
        std::string p2 {get_name("2")};
        if (p2 == "quit" | p2 == "exit") {break;}
        int a2 {get_age(p2)};



        if (a1 > a2){
            std::cout << p1 << " (age " << a1 << ") " << "is older than " << p2 << " (age " << a2 << ").\n\n";
        }
        else if (a1 == a2){
            std::cout << p1 << " (age " << a1 << ") " << "is the same age as " << p2 << " (age " << a2 << ").\n\n";
        }
        else{
            std::cout << p2 << " (age " << a2 << ") " << "is older than " << p1 << " (age " << a1 << ").\n\n";
        }
    }
    return 0;
}