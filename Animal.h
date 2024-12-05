#pragma once

#include <string> 


class Animal {
public:
    Animal(const std::string& name, int age) : name(name), age(age) {}
    virtual void displayInfo() const = 0; 
    virtual ~Animal() = default; 

protected:
    std::string name; 
    int age;         
};
