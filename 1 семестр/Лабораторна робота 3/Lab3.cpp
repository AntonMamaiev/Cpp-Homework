#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

//LAB 3
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c;
	cout << "Введіть числа:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	if (a >= b && b >= c) {
		a *= a;
		b *= b;
		c *= c;
		cout << "a>=b>=c" << endl;
		cout << "a = " << a << "b = " << b << "c = " << c << endl;
	}
	else {
		cout << "Числа залишились без змін" << endl;
	}
	system("pause");
}*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "Введіть числo:" << endl;
	cout << "x = ";
	cin >> x;
	if (x <= 0) {
		y = cos(x * x) - 3;
		cout << "При цьому х у буде дорівнювати: " << endl << "y = " << y << endl;
	}
	else {
		y = exp(2 * x) + 2;
		cout << "При цьому х у буде дорівнювати: " << endl << "y = " << y<<endl;
	}
	system("pause");
}*/
//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, d, c;
	cout << "Введіть числа:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "d = ";
	cin >> d;
	cout << "c = ";
	cin >> c;
	if (a * a == d && pow(a, 3) == c) cout << "Так, число d і c є відповідно квадратом і кубом числа a" << endl;
	else cout<<"Ні, число d і c не є відповідно квадратом і кубом числа a" << endl;
	system("pause");
}*/
//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x1, x2, x3, y1, y2, y3,k;
	cout << "Введіть координати точок А1, А2 і А3:" << endl;
	cout << "A1: x1 = "; cin >> x1; cout << "y1 = "; cin >> y1;
	cout << "A2: x2 = "; cin >> x2; cout << "y2 = "; cin >> y2;
	cout << "A3: x3 = "; cin >> x3; cout << "y3 = "; cin >> y3;
	k = (x1 / y1);
	if (k == (x2/y2) && k == (x3/y3)) cout << "Ці точки лежать на одній прямій"<<endl;
	else cout << "Ці точки НЕ лежать на одній прямій"<<endl;
	system("pause");
}*/
//Задача 5 
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a=0.7, b=1.25, z ,x;
	cout << "Введіть числа:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "x = "; cin >> x;
	z = pow(x+b,2);
	cout <<"z = "<< z << endl;
	if (x > b) cout << "y = " << a + pow(cos(a + b * x * z), 3.5) << endl;
	if (x <= a) cout << "y = " << a + log(a + b * x) - 2 * x << endl;
	else cout << "y = " << exp(a * x) - 3.5 * pow(cos(z + b * x), 2) << endl; // (a < x && x <= b)
	system("pause");
}*/