#include <iostream>
#include "Stable.h"         


int main() {
    
    Stable stable;

    stable.addHorse(Horse("Дух", "Мустанг", 5)); 
    stable.addHorse(Horse("Тень", "Арабская", 7)); 

    stable.addEmployee(Groom("Иван Иванов")); 

    stable.addInventoryItem(InventoryItem("Сено", 100));
    stable.addInventoryItem(InventoryItem("Седло", 5)); 

    stable.displayAllInfo(); 

    return 0; 
}
