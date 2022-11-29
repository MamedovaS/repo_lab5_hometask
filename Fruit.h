#pragma once
#include <iostream>
#include <string>


using namespace std;
class Fruit {
private:
	int size;//, sweetSize, sourSize, neutralSize;
	string name, color, taste;

public:
	
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
	void setSize(int size) { this->size = size; }
	int getSize() { return this->size; }
	void setColor(string color) { this->color = color; }
	string getColor() { return this->color; }
	void setTaste(string taste) { this->taste = taste; }
	string getTaste() { return this->taste; }

	

	Fruit(string name, int size, string color, string taste);
	Fruit();
};

