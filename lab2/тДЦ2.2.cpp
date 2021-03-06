#include "pch.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int * naoborot(int * a, int dlina) {
	for (int i = 0; i < dlina / 2; i++) {
		swap(a[i], a[dlina - 1 - i]);
	}
	return a;
}

int * neubiv(int * a, int dlina) {
	for (int i = 0; i < dlina; i++) {
		for (int j = i + 1; j < dlina; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int * ubiv(int * a, int dlina) {
	for (int i = 0; i < dlina; i++) {
		for (int j = i + 1; j < dlina; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int* (*univers(int* a, int dlina))(int*, int) {
	int plus = 0;
	for (int i = 1; i < dlina; i++) {
		plus += a[i];
	}
	if (plus == a[0]) {
		return naoborot;
	}
	else if (plus > a[0]) {
		return neubiv;
	}
	else {
		return ubiv;
	}
}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int * (*func)(int*, int);
	int size = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	int* array = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 44;
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	func = univers(array, size);
	array = func(array, size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	delete[] array;
	func = NULL;
	system("pause");
	return 0;
};