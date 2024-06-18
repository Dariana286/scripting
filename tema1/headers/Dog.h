#pragma once
#include"AAnimalDomestic.h"

class Dog : public AAnimalDomestic
{
public:
	Dog();
	Dog(std::string name);

	void makeSound() const override;
};
