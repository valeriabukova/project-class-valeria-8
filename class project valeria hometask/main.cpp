//
//  main.cpp
//  class project valeria hometask
//
//  Created by Valeria  Bukova on 17.09.2024.
//

///#ifndef CAR_H
///#define CAR_H

///#include <iostream>

class Car
{
private:
    char brand[50];
    char model[50];
    int year;
    double price;

public:
   
    Car();

    
    Car(const char* brand, const char* model, int year, double price);


    ~Car();

    
    const char* getBrand() const;
    const char* getModel() const;
    int getYear() const;
    double getPrice() const;

    
    void setBrand(const char* brand);
    void setModel(const char* model);
    void setYear(int year);
    void setPrice(double price);

    
    void input();

   
    void output() const;
};

///#endif // CAR_H
///#include "Car.h"
///#include <iostream>///


void copyString(char* destination, const char* source, int size)
{
    for (int i = 0; i < size; ++i)
    {
        destination[i] = source[i];
        if (source[i] == '\0')
        {
            break;
        }
    }
    destination[size - 1] = '\0'; //
}


Car::Car() : year(0), price(0.0)
{
    copyString(brand, "Unknown", 50);
    copyString(model, "Unknown", 50);
}


Car::Car(const char* brand, const char* model, int year, double price)
    : year(year), price(price)
{
    copyString(this->brand, brand, 50);
    copyString(this->model, model, 50);
}


Car::~Car()
{
    std::cout << "Деструктор класу Car викликано для автомобіля " << brand << " " << model << std::endl;
}


const char* Car::getBrand() const
{
    return brand;
}

const char* Car::getModel() const
{
    return model;
}

int Car::getYear() const
{
    return year;
}

double Car::getPrice() const
{
    return price;
}


void Car::setBrand(const char* brand)
{
    copyString(this->brand, brand, 50);
}

void Car::setModel(const char* model)
{
    copyString(this->model, model, 50);
}

void Car::setYear(int year)
{
    this->year = year;
}

void Car::setPrice(double price)
{
    this->price = price;
}


void Car::input()
{
    std::cout << "Введіть марку автомобіля: ";
    std::cin >> brand;
    std::cout << "Введіть модель автомобіля: ";
    std::cin >> model;
    std::cout << "Введіть рік випуску автомобіля: ";
    std::cin >> year;
    std::cout << "Введіть ціну автомобіля: ";
    std::cin >> price;
}


void Car::output() const {
    std::cout << "Марка: " << brand << std::endl;
    std::cout << "Модель: " << model << std::endl;
    std::cout << "Рік випуску: " << year << std::endl;
    std::cout << "Ціна: " << price << std::endl;
}

///#include "Car.h"
///#include <iostream>///

int main() {
    Car myCar;

    
    std::cout << "Введіть інформацію про автомобіль:" << std::endl;
    myCar.input();

   
    std::cout << "\nІнформація про ваш автомобіль:" << std::endl;
    myCar.output();

    return 0;
}
