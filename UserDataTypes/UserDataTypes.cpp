// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Sandwich {

public:
    void Display() {
        std::cout << "Price: " << price << std::endl;
    }

public:
    char name[32];
    float price;
    bool isHot;
};


int main()
{

    Sandwich sandwich;
    sandwich.price = 4.99f;
    sandwich.isHot = true;
    sandwich.Display();

    std::cout << sandwich.isHot << std::endl;
    std::cout << "Hello World!\n";

    int i = 5;
    char c = 23;

    i = (int)c;

    float f = 23.4f;
    double d = 34.5;

    f = static_cast<float>(d);

    std::cout << sizeof(sandwich);
}

