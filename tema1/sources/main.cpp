#include<iostream>
#include"Dog.h"
#include"Cat.h"
#include"Bear.h"
#include<vector>

int main()
{
	std::vector<IAnimal*> animals;
	animals.push_back(new Dog("Rex"));
	animals.push_back(new Cat("Tera"));
	animals.push_back(new Bear("Baloo"));

	for (const auto& animal : animals) 
	{
		std::cout << animal->getName() << " says: ";
		animal->makeSound();
	}

	return 0;
}
