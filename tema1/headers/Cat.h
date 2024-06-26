#pragma once
#include"AAnimalDomestic.h"

class Cat : public AAnimalDomestic
{
public:
	Cat();
	Cat(std::string name);
	Cat(Cat&& other);

	void makeSound() const override;
};
