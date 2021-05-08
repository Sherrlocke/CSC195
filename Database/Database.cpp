#include "Database.h"
#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"

#include <iostream>
#include <fstream>

Database::~Database()
{
	for (Animal* animal : m_animals) {
		delete animal;
	}
	m_animals.clear();
}

void Database::Add(Animal::eType type)
{

	Animal* animal = Create(type);

	std::cin >> *animal;
	m_animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal* animal : m_animals) {
		std::cout << *animal;
	}
}

void Database::Display(std::string name)
{
	for (Animal* animal : m_animals) {
		if (name == animal->GetName()) {
			std::cout << *animal;
		}
	}
}

void Database::Display(Animal::eType type)
{
	for (Animal* animal : m_animals) {
		if (type == animal->GetType()) {
			std::cout << *animal;
		}
	}
}

Animal* Database::Create(Animal::eType type) {
	Animal* animal = nullptr;
	switch (type) {
		case Animal::eType::Reptile:animal = new Reptile;
			break;
		case Animal::eType::Bird:animal = new Bird;
			break;
		default:
			break;
	} return animal;
}

void Database::RemoveAll() {
	for (Animal* animal : m_animals) {
		delete animal;
	}
	m_animals.clear();
}

void Database::Load(const std::string& filename) {
	std::ifstream input(filename);

	if (input.is_open()) {

		RemoveAll();

		while (!input.eof()) {
			int type;
			input >> type;

			Animal* animal = Create(static_cast<Animal::eType>(type));
			input >> *animal;
			m_animals.push_back(animal);
		}
	}
}

void Database::Save(const std::string& filename) {
	std::ofstream output(filename);
	
		if (output.is_open()) {
			for (Animal* animal : m_animals) {
				output << (int)animal->GetType() << std::endl;
				output << *animal;
			}
		}
}

