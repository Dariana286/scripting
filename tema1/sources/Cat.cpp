#include "Cat.h"
#include<iostream>

Cat::Cat():AAnimalDomestic()
{

}

Cat::Cat(std::string name):AAnimalDomestic(name)
{
	
}

void Cat::makeSound() const
{
	std::cout << "Miau! Miau!" << std::endl;
}
