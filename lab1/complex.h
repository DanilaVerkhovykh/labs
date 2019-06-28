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

Complex pluss(Complex a, Complex b); //�������� 
Complex minuss(Complex a, Complex b); //���������
Complex umn(Complex a, Complex b); //��������� 
Complex del(Complex a, Complex b); //������� 
double abs_value(Complex a);	   //���������� 
void menu();			 //����
void vvod(Complex* c1, Complex* c2); //��������

#endif