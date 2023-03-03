#include "greeter.h"

int main()
{
    Greeter::Greeter temp;
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    temp.greet(name);

    return 0;
}