#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	double re;
	double img;
	double modulee;

public:
	Complex(double r, double i) {
		re = r;
		img = i;
	}
	void module() {
		modulee = sqrt(pow(re, 2) + pow(img, 2));
	}
	void vyvod() {
		cout << "Действительная часть к.ч.: " << re << endl;
		cout << "Мнимая часть к.ч.: " << img << endl;
		cout << "Модуль к.ч.: " << modulee << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Complex c1(1, 2.5);
	Complex c2(0.0, 4.0);

	c1.module(); c2.module();
	c1.vyvod();
	c2.vyvod();
	system("pause");
	return 0;
}