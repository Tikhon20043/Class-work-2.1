#pragma once

#include <string>   // Подключаем библиотеку для работы со строками
#include <iostream> // Подключаем библиотеку для ввода-вывода
#include "IDisplayable.h" // Подключаем интерфейс IDisplayable

// Класс InventoryItem (Элемент инвентаря) наследует от IDisplayable
class InventoryItem : public IDisplayable {
public:
    InventoryItem() : itemName("Unnamed"), quantity(0) {} // Конструктор по умолчанию
    InventoryItem(const std::string& itemName, int quantity)
        : itemName(itemName), quantity(quantity) {}

    void displayInfo() const override;

private:
    std::string itemName; // Название элемента инвентаря
    int quantity;         // Количество элемента инвентаря
};
