#pragma once
#include "Animal.h"
#include <vector>

class Database
{
public:
	~Database();

	void Add(Animal::eType type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::eType type);
	void Load(const std::string& filename);
	void Save(const std::string& filename);


private:
	std::vector<Animal*> m_animals;
	Animal* Create(Animal::eType type);
	void RemoveAll();
};

