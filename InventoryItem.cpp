#include "InventoryItem.h"

void InventoryItem::displayInfo() const {
    std::cout << "Предмет: " << itemName 
              << ", Количество: " << quantity << std::endl;
}
