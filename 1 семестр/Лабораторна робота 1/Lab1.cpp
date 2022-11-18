#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if ((x <= 0 and y <= 0) or (x > 0 and y > 0 and (x + y) <= 1)) {
		cout << "Точка знаходиться в області визначення\n";
	}
	else {
		cout << "Точка НЕ знаходиться в області визначення\n";
	}
}