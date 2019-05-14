#include "pch.h"
#include <iostream>

using namespace std;

double delc(double a, double b) {
	return int(a / b);
}

double delo(double a, double b) {
	return (a / b - int(a / b));
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b;
	int answer;
	double(*p)(double, double) = NULL;
	cout << "Введите два числа: ";
	cin >> a >> b;
	cout << endl << "Если вы хотите найти целую часть от деления - введите 1, остаток - 0: ";
	cin >> answer;

	switch (answer) {
	case 0:
		p = delo;
		break;
	case 1:
		p = delc;
		break;
	}
	double result = p(a, b);
	cout << endl << "Итог: " << result << endl;;
	system("pause");
	return 0;
}
