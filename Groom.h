#pragma once

#include "Employee.h" 
#include "IDisplayable.h" 


class Groom : public Employee, public IDisplayable {
public:
    Groom() : Employee("Unnamed") {} 
    Groom(const std::string& name) : Employee(name) {}

    void displayInfo() const override;
};
