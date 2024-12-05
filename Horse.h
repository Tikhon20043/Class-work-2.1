#pragma once

#include "Animal.h" // Подключаем класс Animal
#include "IDisplayable.h" // Подключаем интерфейс IDisplayable
#include <iostream> // Подключаем библиотеку для ввода-вывода

// Класс Horse наследует от Animal и IDisplayable
class Horse : public Animal, public IDisplayable {
public:
    Horse() : Animal("Unnamed", 0), breed("Unknown") {} // Конструктор по умолчанию
    Horse(const std::string& name, const std::string& breed, int age)
        : Animal(name, age), breed(breed) {}

    void displayInfo() const override;

private:
    std::string breed; // Порода лошади
};
