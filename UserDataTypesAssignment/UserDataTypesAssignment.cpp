// UserDataTypesAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
    Employee employees[5];

    unsigned short numEmployees;
    std::cout << "Number of Employees: ";
    std::cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        employees[i].Read();
    }

    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }
}
