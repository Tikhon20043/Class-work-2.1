#pragma once

#include "Horse.h"             // Подключаем класс Horse
#include "Groom.h"             // Подключаем класс Groom
#include "InventoryItem.h"     // Подключаем класс InventoryItem

// Определяем максимальное количество объектов в конюшне
const int maxHorses = 10;
const int maxEmployees = 10;
const int maxInventoryItems = 10;

// Класс Stable (Конюшня)
class Stable {
public:
    Stable();

    void addHorse(const Horse& horse); 
    void addEmployee(const Groom& employee); 
    void addInventoryItem(const InventoryItem& item); 

    void displayAllInfo() const;

private:
    Horse horses[maxHorses];                     // Статический массив лошадей
    Groom employees[maxEmployees];               // Статический массив сотрудников
    InventoryItem inventory[maxInventoryItems]; // Статический массив элементов инвентаря
    
    int horseCount;          // Текущая количество лошадей
    int employeeCount;       // Текущая количество сотрудников
    int inventoryCount;      // Текущая количество элементов инвентаря
};
