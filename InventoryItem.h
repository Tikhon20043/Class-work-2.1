#pragma once

#include <string>   
#include <iostream> 
#include "IDisplayable.h" 

class InventoryItem : public IDisplayable {
public:
    InventoryItem() : itemName("Unnamed"), quantity(0) {} 
    InventoryItem(const std::string& itemName, int quantity)
        : itemName(itemName), quantity(quantity) {}

    void displayInfo() const override;

private:
    std::string itemName; 
    int quantity;         
};
