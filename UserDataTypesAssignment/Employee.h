#pragma once

class Employee {
public:
	void Read();
	void Write();


private:
	char name[32];
	int age;    
	int zipCode;   
	double wage;    
	int daysWorked;    
	int hoursWorkedPerDay;
	int taxDeduction;
	int totalHours = 0;
	float grossIncome = 0;
	float netIncome = 0;

	static const float TAX;
};
