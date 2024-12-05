#pragma once

#include <string>   // Подключаем библиотеку для работы со строками
#include <iostream> // Подключаем библиотеку для ввода-вывода

// Класс Employee (Сотрудник)
class Employee {
public:
    Employee(const std::string& name) : name(name) {}
    
    virtual void displayInfo() const; // Объявление метода

protected:
    std::string name; // Имя сотрудника
};
