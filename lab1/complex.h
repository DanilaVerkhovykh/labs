#include "pch.h"

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <windows.h> 
#include <fstream>
#include <cmath>
using namespace std;

class Complex {
public:
	double Rez;
	double Imz;
};

Complex pluss(Complex a, Complex b); //сложение 
Complex minuss(Complex a, Complex b); //вычитание
Complex umn(Complex a, Complex b); //умножение 
Complex del(Complex a, Complex b); //деление 
double abs_value(Complex a);	   //нахождение 
void menu();			 //меню
void vvod(Complex* c1, Complex* c2); //значения

#endif