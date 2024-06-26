#include "Singleton.h"
#include<iostream>

Singleton* Singleton::instance = nullptr;

Singleton::Singleton(const Singleton& cop)
{
	this->instance = cop.instance;
}

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::getInstance()
{
    if (instance == nullptr) 
    {
        instance = new Singleton();
    }
    return instance;
}
