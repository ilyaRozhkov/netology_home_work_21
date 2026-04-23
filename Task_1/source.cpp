#include <iostream>
#include <windows.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);
    std::cout << "Здравствуйте, " << name << "!" << std::endl;

    return 0;
}