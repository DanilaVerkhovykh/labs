#include "pch.h"

#include "complex.h"

Complex pluss(Complex a, Complex b) {
	Complex res;
	res.Rez = a.Rez + b.Rez;
	res.Imz = a.Imz + b.Imz;
	return res;
}

Complex minuss(Complex a, Complex b) {
	Complex res;
	res.Rez = a.Rez - b.Rez;
	res.Imz = a.Imz - b.Imz;
	return res;
}

Complex umn(Complex a, Complex b) {
	Complex res;
	res.Rez = a.Rez*b.Rez - a.Imz*b.Imz;
	res.Imz = a.Rez*b.Imz + b.Rez*a.Imz;
	return res;
}

Complex del(Complex a, Complex b) {
	Complex res;
	res.Rez = (a.Rez*b.Rez + a.Imz*b.Imz) / (pow(b.Rez, 2) + (pow(b.Imz, 2)));
	res.Imz = (b.Rez*a.Imz - a.Rez*b.Imz) / (pow(b.Rez, 2) + (pow(b.Imz, 2)));
	return res;
}

double abs_value(Complex a) {
	double res;
	res = sqrt(pow(a.Rez, 2) + pow(a.Imz, 2));
	return res;
}

void vvod(Complex* c1, Complex* c2) {
	cout << "Введите действительную и мнимую части первого комплексного числа: ";
	cin >> c1->Rez >> c1->Imz;
	cout << "Введите действительную и мнимую части второго комплексного числа: ";
	cin >> c2->Rez >> c2->Imz;
}

void menu() {
	cout << "Выберите:  " << endl;
	cout << " Цифру 1, чтобы сложить;" << endl;
	cout << " Цифру 2, чтобы вычесть;" << endl;
	cout << " Цифру 3, чтобы умножить;" << endl;
	cout << " Цифру 4, чтобы поделить;" << endl;
	cout << " Цифру 5, чтобы закрыть программу;" << endl << endl;
	cout << "Введите цифру: ";
}