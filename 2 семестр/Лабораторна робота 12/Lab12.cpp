#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;
// LAB 12
// EX 1
/*

// y = 2x + sin2x

float finY (float x) {
	return (2 * x + sin(2*x));
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x;
	cout <<"y = 2x + sin2x" <<endl<< "x = "; cin >> x;
	cout << "y = " << finY(x) << endl;
}*/

// EX 2
/*

float f(float a, float b) {
	return ((3 * pow(a, 2) + pow(b, 2) - 1) / (abs(a + b) + 100));
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "t = " << (f(x + 2, y) - 3 * f(pow(y, 2), x)) / (4 + pow(f(x, y), 2))<<endl;
}*/

// EX 3
