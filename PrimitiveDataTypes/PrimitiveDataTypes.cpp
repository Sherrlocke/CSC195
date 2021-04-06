// PrimitiveDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PrimitiveDataTypes.h"
using namespace std;


int main()
{
    string name;

    short age = 0;
    bool isAdult = 0;
    int zipCode = 0;
    float wage = 0;
    int daysWorked = 0;
    int hoursWorkedPerDay;
    int totalHours = 0;
    float grossIncome = 0;
    float netIncome = 0;

    float tax = 0.1f;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your Zip Code: ";
    cin >> zipCode;
    cout << "Enter your wage: ";
    cin >> wage;
    cout << "How many days did you work? : ";
    cin >> daysWorked;

    if (age > 18) {
        isAdult = 1;
    }

    totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "enter hours worked for day " << i << ":";
        cin >> hoursWorkedPerDay;
        totalHours = totalHours + hoursWorkedPerDay;
    }

    grossIncome = totalHours * wage;
    tax = grossIncome * tax;
    netIncome = grossIncome - tax;

    cout << name << " worked for " << totalHours << " hours at $" << wage << " per hour." << std::endl;
    cout << "Gross Income: " << grossIncome << std::endl;
    cout << "Net Income: " << netIncome << std::endl;
}

