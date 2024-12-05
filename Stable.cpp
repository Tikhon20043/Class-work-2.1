#include <iostream>
#include "Stable.h"

Stable::Stable() : horseCount(0), employeeCount(0), inventoryCount(0) {}

void Stable::addHorse(const Horse& horse) { 
    if (horseCount < maxHorses) {
        horses[horseCount++] = horse; // Добавляем лошадь в массив и увеличиваем счетчик
    }
}

void Stable::addEmployee(const Groom& employee) { 
    if (employeeCount < maxEmployees) {
        employees[employeeCount++] = employee; // Добавляем сотрудника в массив и увеличиваем счетчик
    }
}

void Stable::addInventoryItem(const InventoryItem& item) { 
    if (inventoryCount < maxInventoryItems) {
        inventory[inventoryCount++] = item; // Добавляем элемент инвентаря в массив и увеличиваем счетчик
    }
}

void Stable::displayAllInfo() const {
    std::cout << "\n--- Horses ---\n";
    for (int i = 0; i < horseCount; ++i) {
        horses[i].displayInfo(); // Вызываем метод отображения информации о лошади
    }

    std::cout << "\n--- Employees ---\n";
    for (int i = 0; i < employeeCount; ++i) {
        employees[i].displayInfo(); // Вызываем метод отображения информации о сотруднике
    }

    std::cout << "\n--- Inventory ---\n";
    for (int i = 0; i < inventoryCount; ++i) {
        inventory[i].displayInfo(); // Вызываем метод отображения информации о элементе инвентаря
    }
}
