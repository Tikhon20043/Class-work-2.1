#pragma once

#include <string>   
#include <iostream> 


class Employee {
public:
    Employee(const std::string& name) : name(name) {}
    
    virtual void displayInfo() const; 

protected:
    std::string name; 
};
