// UserDataTypes2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sandwich.h"
#include <iostream>

#define SHOP_NAME "Subway"
#define XBOX

//typedef double currency;
using currency = double;
typedef unsigned char byte;

int main()
{
    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();


    f1();
    std::cout << SHOP_NAME << std::endl;

#ifdef _DEBUG
    std::cout << "debug\n";
#endif

#ifdef  XBOX
    std::cout << "Xbox\n";
#endif //  XBOX



    currency balance;

    struct rbg {
        byte r;
        byte g;
        byte b;
    };

    enum Difficulty {
        Easy,
        Medium,
        Hard
    };

    Difficulty difficulty = Difficulty::Medium;
    std::cout << (int)difficulty << std::endl;



}
