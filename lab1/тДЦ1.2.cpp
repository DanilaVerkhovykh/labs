#include "pch.h"
#include "complex.h"

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	ifstream file("complex.txt");

	if (file.is_open()) {
		int n = 0;
		file >> n;
		Complex* p = new Complex[n];

		for (int i = 0; i < n; i++) {
			file >> p[i].Rez;
			file >> p[i].Imz;
		}
		file.close();

		int index = -1;
		double max = 0;
		Complex m;
		for (int i = 0; i < n; i++) {
			if (abs_value(p[i]) > max) {
				m = p[i];
				max = abs_value(p[i]);
				index = i;
			}
		}

		cout << "Номер комплексного числа с максимальным модулем: " << index + 1 << endl;
		cout << "Модуль равен: " << max << endl << endl;
		delete[] p;
		p = NULL;
	}
	else {
		cout << "Данные отсутвуют!" << endl;
	}

	system("pause");
	return 0;
}