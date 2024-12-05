#pragma once


class IDisplayable {
public:
    virtual void displayInfo() const = 0; 
    virtual ~IDisplayable() = default; 
};
