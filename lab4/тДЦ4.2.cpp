#include "pch.h"
#include <iostream>
using namespace std;

class Vector {
private:
	double x;
	double y;
public:
	Vector() {};
	Vector(double a, double b) {
		x = a;
		y = b;
	}
	double modules() {
		double module = sqrt(pow(x, 2) + pow(y, 2));
		return module;
	}

	void sum(Vector v) {
		x += v.x;
		y += v.y;
	}

	void diff(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void vyvod() {
		cout << x << " " << y << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "RUS");

	Vector v1(0, 2);
	Vector v2(-4,3);
	v1.vyvod();
	cout << "Модуль первого вектора равен: " << v1.modules() << endl << endl;

	v2.sum(v1);
	v2.diff(v1);
	v2.vyvod();
	cout << "Модуль второго вектора равен: " << v2.modules() << endl << endl;
	system("pause");
	return 0;
}