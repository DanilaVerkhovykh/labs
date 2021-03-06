#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Alive {
protected:
	string height;
	string weight;
public:
	Alive(string h, string m) {
		height = h;
		weight = m;
	}
	virtual void zvuk() = 0;
};

class Bird : public Alive {
public:
	bool sing;
	Bird(string h, string w, bool sg) : Alive(h, w) {
		sing = sg;
	}

	void zvuk() {
		cout << "Fiut'- Fiut'" << endl;
	}

};

class Fish : public Alive {
public:
	bool bul_bul;
	Fish(string h, string w, bool b_b) : Alive(h, w) {
		bul_bul = b_b;
	}

	void zvuk() {
		cout << "*I can't speak, sorry*" << endl;
	}
};

class Animal : public Alive {
public:
	bool breath;
	Animal(string h, string w, bool b) : Alive(h, w) {
		breath = b;
	}
	void zvuk() {
		cout << "*HARD BREATH*";
	}
};