#include "Bear.h"
#include<iostream>

Bear::Bear():AAnimalSalbatic()
{

}

Bear::Bear(std::string name):AAnimalSalbatic(name)
{

}

void Bear::makeSound() const
{
	std::cout << "Growl! Growl!" << std::endl;
}
