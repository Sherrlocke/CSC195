#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	/*Animal animal;
	animal.Speak();
	cout << sizeof(animal) << endl;*/

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.pop_back();

	std::vector<Animal*> animals;
	animals.push_back(new Bird);
	animals.push_back(new Bird(12, 5.0f));
	animals.push_back(new Reptile);

	for (Animal* animal : animals) {
		animal->Speak();
	}

	for (Animal* animal : animals) {
		delete animal;
	}
	animals.clear();

	Bird robin(8, 12.0f);
	robin.Speak();
	cout << sizeof(Bird) << endl;
}