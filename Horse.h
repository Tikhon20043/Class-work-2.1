#pragma once

#include "Animal.h" 
#include "IDisplayable.h" 
#include <iostream> 


class Horse : public Animal, public IDisplayable {
public:
    Horse() : Animal("Unnamed", 0), breed("Unknown") {} 
    Horse(const std::string& name, const std::string& breed, int age)
        : Animal(name, age), breed(breed) {}

    void displayInfo() const override;

private:
    std::string breed; 
};
