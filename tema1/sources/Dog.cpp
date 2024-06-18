#include "Dog.h"
#include<iostream>

Dog::Dog():AAnimalDomestic()
{

}

Dog::Dog(std::string name):AAnimalDomestic(name)
{

}

void Dog::makeSound() const
{
	std::cout << "Ham! Ham!" << std::endl;
}
