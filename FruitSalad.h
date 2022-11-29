#pragma once
#include "Fruit.h"
#include <iostream>
#include <string>
using namespace std;
class FruitSalad {
private:
	static const int SIZE = 3;
	Fruit fruits[SIZE];
public:
	enum Topping {
		SWEET = 23,
		SOUR = 666,
		NEUTRAL = 98
	};

	void setFruits(Fruit fruits[]);

	Fruit* getFruits() { return fruits; };

	int maxSize(int sw, int so, int sn);

	int countingSizeOfEcheTaste(Fruit fruits[]);
}
