#pragma once

// Интерфейс для отображаемых объектов
class IDisplayable {
public:
    virtual void displayInfo() const = 0; // Чисто виртуальный метод
    virtual ~IDisplayable() = default; // Виртуальный деструктор
};
