#include "Cat.h"
#include<iostream>

Cat::Cat():AAnimalDomestic()
{

}

Cat::Cat(std::string name):AAnimalDomestic(name)
{
	
}

Cat::Cat(Cat&& other):AAnimalDomestic(std::move(other))
{

}

void Cat::makeSound() const
{
	std::cout << "Miau! Miau!" << std::endl;
}
