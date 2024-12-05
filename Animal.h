#pragma once

#include <string> // Подключаем библиотеку для работы со строками

// Абстрактный класс Animal
class Animal {
public:
    Animal(const std::string& name, int age) : name(name), age(age) {}
    virtual void displayInfo() const = 0; // Чисто виртуальный метод
    virtual ~Animal() = default; // Виртуальный деструктор

protected:
    std::string name; // Имя животного
    int age;          // Возраст животного
};
