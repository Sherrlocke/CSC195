#include "Vector.h"
#include <iostream>

int main() {
	nc::vector<int> numbers;
	numbers.push_back(12);
	numbers.push_back(8);
	numbers.push_back(19);
	numbers.push_back(3);
	numbers.pop_back();
	numbers.pop_back();
	numbers.push_back(69);

	for (size_t i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << std::endl;
	}
}