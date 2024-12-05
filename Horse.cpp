#include "Horse.h"

void Horse::displayInfo() const {
    std::cout << "Имя лошади: " << name 
              << ", Возраст: " << age << " Лет"
              << ", Порода: " << breed << std::endl;
}
