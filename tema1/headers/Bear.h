#pragma once
#include"AAnimalSalbatic.h"

class Bear : public AAnimalSalbatic
{
public:
	Bear();
	Bear(std::string name);

	void makeSound() const override;
};
