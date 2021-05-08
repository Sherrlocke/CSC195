#include "Bird.h"
#include <iostream>
#include <fstream>

void Bird::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "enter number of eggs: ";
	istream >> m_numEggs;
}

void Bird::Write(std::ostream& ostream)
{
	Animal::Write(ostream);

	ostream << "Number of eggs: " << m_numEggs << std::endl;
}

void Bird::Read(std::ifstream& istream) {
	istream >> m_numEggs;
}

void Bird::Write(std::ofstream& ostream) {
	ostream << m_numEggs << std::endl;
}


