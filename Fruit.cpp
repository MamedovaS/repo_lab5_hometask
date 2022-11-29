#include "Fruit.h"
#include <iostream>
#include <string>
using namespace std;

Fruit::Fruit(string name, int size, string color, string taste) {
	setName(name);
	setSize(size);
	setColor(color);
	setTaste(taste);
}
