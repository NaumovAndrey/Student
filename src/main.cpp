#include "../include/main.h"
#include "../include/Student.h"
#include <clocale>
#include <iostream>
#include <ostream>

int main()
{
    setlocale(LC_ALL, "rus");

    Student student1("Andrey", "Naumov");
    Student student2("Alena", "Naumova");
    Student st3("Anna", "Naumova");

    std::cout << student1 << std::endl;
    std::cout << student2 << std::endl;
    std::cout << st3 << std::endl;
    return 0;
}