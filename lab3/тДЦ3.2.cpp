#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
		cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl << endl;
	};

};
int main()
{
	Tiles tile1, tile2;

	tile1.brand = "Tiles from Files";
	tile1.size_h = 200;
	tile1.size_w = 250;
	tile1.price = 1000000;

	tile2.brand = "R/T/U";
	tile2.size_h = 50;
	tile2.size_w = 100;
	tile2.price = 10;

	tile1.getData();
	tile2.getData();

	system("pause");
	return 0;
}