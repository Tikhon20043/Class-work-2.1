#include <iostream>
#include "Stable.h"         // Подключаем класс Stable

// Основная функция программы демонстрирует работу системы классов.
int main() {
    
    Stable stable;

    stable.addHorse(Horse("Дух", "Мустанг", 5)); 
    stable.addHorse(Horse("Тень", "Арабская", 7)); 

    stable.addEmployee(Groom("Иван Иванов")); 

    stable.addInventoryItem(InventoryItem("Сено", 100));
    stable.addInventoryItem(InventoryItem("Седло", 5)); 

    stable.displayAllInfo(); // Отображаем всю информацию о конюшне

    return 0; // Завершаем программу
}
