
#include "FruitSalad.h"
#include <iostream>
#include <string>
using namespace std;
static const int SIZE = 3;
Fruit fruits[SIZE];

enum Topping {
	SWEET = 23,
	SOUR = 666,
	NEUTRAL = 98
};

void FruitSalad:: setFruits(Fruit fruits[]) {
	for (int i = 0; i < SIZE; i++) {
		this->fruits[i] = fruits[i];
	}
};

int FruitSalad:: maxSize(int sw, int so, int sn) {
	int maxSize = 0;
	if (sw > so && sw > sn) {
		maxSize += sw;
		cout << "For salat we'll use a " << maxSize << endl;
		cout << "the topping for salad is sweet with cod " << Topping::SWEET << endl;
		return maxSize;
		if (so > sw && so > sn) {
			maxSize += so;
			cout << "For salat we'll use a " << maxSize << endl;
			cout << "the topping for salad is sour with cod " << Topping::SOUR << endl;
			return maxSize;
		}

		else {
			maxSize += sn;

			cout << "For salat we'll use a " << maxSize << endl;
			cout << "the topping for salad is neutrel with cod " << Topping::NEUTRAL << endl;
			return maxSize;
		}
	}
	return 0;
}

int FruitSalad:: countingSizeOfEcheTaste(Fruit fruits[]) {
	int sizeSweet = 0, sizeSour = 0, sizeNeutral = 0;

	for (int i = 0; i < SIZE; i++) {
		if (fruits[i].getTaste() == "sweet") {
			sizeSweet += fruits[i].getSize();
			//return sizeSweet;
		}
		if (fruits[i].getTaste() == "sour") {
			sizeSour += fruits[i].getSize();
			//return sizeSour;
		}
		if (fruits[i].getTaste() == "neutral") {
			sizeNeutral += fruits[i].getSize();
			//return sizeNeutral;
		}
		maxSize(sizeSweet, sizeSour, sizeNeutral);
	}

	return 0;
}
