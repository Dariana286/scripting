#include "AAnimal.h"
#include<iostream>

AAnimal::AAnimal()
{

}

AAnimal::AAnimal(std::string name)
{
	this->name = name;
}

const std::string AAnimal::getName() const
{
	return this->name;
}
