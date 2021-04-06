#include "Employee.h"
#include <iostream>

const float Employee::TAX = 0.1f;

void Employee::Read() {

    std::cout << "Enter your name: ";
    std::cin >> Employee::name;
    std::cout << "Enter your age: ";
    std::cin >> Employee::age;
    std::cout << "Enter your Zip Code: ";
    std::cin >> Employee::zipCode;
    std::cout << "Enter your wage: ";
    std::cin >> Employee::wage;
    std::cout << "How many days did you work? : ";
    std::cin >> Employee::daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        std::cout << "enter hours worked for day " << i << ":";
        std::cin >> Employee::hoursWorkedPerDay;
        Employee::totalHours = Employee::totalHours + Employee::hoursWorkedPerDay;
    }

    Employee::grossIncome = Employee::totalHours * Employee::wage;
    Employee::taxDeduction = Employee::grossIncome * Employee::TAX;
    Employee::netIncome = Employee::grossIncome - Employee::taxDeduction;

}

void Employee::Write() {
    std::cout << Employee::name << " worked for " << Employee::totalHours << " hours at $" << Employee::wage << " per hour." << std::endl;
    std::cout << "Gross Income: " << Employee::grossIncome << std::endl;
    std::cout << "Net Income: " << Employee::netIncome << std::endl;
}