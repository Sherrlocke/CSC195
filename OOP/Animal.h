#pragma once
#include <iostream>

class Animal {
public:
	Animal() { 
		std::cout << "Animal Constructor\n";
		m_lifespan = 4; 
		m_p = new int(10);
	}

	Animal(int lifespan) { m_lifespan = lifespan;  }

	~Animal() {
		std::cout << "Destructor\n";
		delete m_p;
	}

	virtual void Speak() = 0;

	int GetLifespan() { return m_lifespan; }
	void SetLifespan(int lifespan) { m_lifespan = lifespan;  }

protected:
	int m_lifespan = 0;
	int* m_p;
};
