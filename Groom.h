#pragma once

#include "Employee.h" // Подключаем класс Employee
#include "IDisplayable.h" // Подключаем интерфейс IDisplayable

// Класс Groom наследует от Employee и IDisplayable
class Groom : public Employee, public IDisplayable {
public:
    Groom() : Employee("Unnamed") {} // Конструктор по умолчанию
    Groom(const std::string& name) : Employee(name) {}

    void displayInfo() const override;
};
