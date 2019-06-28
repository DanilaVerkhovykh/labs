#include "pch.h"
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	queue <string> car_wash;  
	int k = 0;
	cout << "Введите количество человек в очереди:" << endl;
	cin >> k;
	cout << "Введите имена людей в порядке хода очереди:" << endl;
	for (int i = 0; i < k; i++) {
		string imya;
		cin >> imya;
		car_wash.push(imya);
	}
	int minutes, waiting;
	cout << "Какое время мойки автомобиля?" << endl;
	cin >> minutes;
	cout << "Какое время ожидания?" << endl;
	cin >> waiting;
	int final = 1;
	final = minutes * k;
	for (int i = waiting;i > 0;i -= minutes) {
		if (waiting - minutes >= 0)  car_wash.pop();  
	}
	if (final < waiting) cout << "Очередь закончилась";
	else  cout << "Первый человек в очереди: " << car_wash.front() << endl;

	system("pause");
	return 0;
}