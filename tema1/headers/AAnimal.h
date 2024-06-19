#pragma once
#include"IAnimal.h"

class AAnimal : public IAnimal
{
protected:
	std::string name;

public:
	AAnimal();
	AAnimal(std::string name);
	const std::string getName() const override;
};
