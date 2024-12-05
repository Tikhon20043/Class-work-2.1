#pragma once

#include "Horse.h"             
#include "Groom.h"             
#include "InventoryItem.h"     

const int maxHorses = 10;
const int maxEmployees = 10;
const int maxInventoryItems = 10;

class Stable {
public:
    Stable();

    void addHorse(const Horse& horse); 
    void addEmployee(const Groom& employee); 
    void addInventoryItem(const InventoryItem& item); 

    void displayAllInfo() const;

private:
    Horse horses[maxHorses];                     
    Groom employees[maxEmployees];               
    InventoryItem inventory[maxInventoryItems]; 
    
    int horseCount;          
    int employeeCount;       
    int inventoryCount;      
};
