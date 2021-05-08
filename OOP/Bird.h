#pragma once
#include "Animal.h"

class Bird : public Animal
{
public: 
	Bird() {}
	Bird(int lifespan, float flightSpeed) : Animal(lifespan) 
	{
		std::cout << "Bird constructor\n";
		m_flightSpeed = flightSpeed;
	}
	void Speak() override;

protected:
	float m_flightSpeed = 0.0f;
};

