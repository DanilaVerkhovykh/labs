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
	void set_re(double real) {
		re = real;
	}
	void set_img(double image) {
		img = image;
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
	Complex c1, c2;

	c1.set_re(1);
	c1.set_img(2.5);
	c1.module();
	c1.vyvod();

	c2.set_re(0.0);
	c2.set_img(4.0);
	c2.module();
	c2.vyvod();
	system("pause");
	return 0;
}