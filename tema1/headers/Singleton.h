#pragma once

class Singleton
{
private:
	static Singleton* instance;
	Singleton();
	Singleton(const Singleton& cop);
	~Singleton();

public:
	static Singleton* getInstance();
};
