#include "Reptile.h"
#include <iostream>
#include <fstream>

void Reptile::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "enter number of eggs: ";
	istream >> m_numEggs;
}

void Reptile::Write(std::ostream& ostream)
{
	Animal::Write(ostream);

	ostream << "Number of eggs: " << m_numEggs << std::endl;
}

void Reptile::Read(std::ifstream& istream) {
	istream >> m_numEggs;
}

void Reptile::Write(std::ofstream& ostream) {
	ostream << m_numEggs << std::endl;
}
