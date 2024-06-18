#pragma once
#include<string>

class IAnimal
{
public:
	virtual const std::string getName() const = 0;
	virtual void makeSound() const = 0;
};
