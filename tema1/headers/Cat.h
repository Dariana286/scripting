#pragma once
#include"AAnimalDomestic.h"

class Cat : public AAnimalDomestic
{
public:
	Cat();
	Cat(std::string name);

	void makeSound() const override;
};
