#pragma once
#include"AAnimalDomestic.h"
#include"Dari.h"

class Cat : public AAnimalDomestic, public Dari
{
public:
	Cat();
	Cat(std::string name);

	void makeSound() const override;
};
