#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

//Lab 7
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, kdot=0 , i, x, par=0;
	cout << "Введіть кількість чисел для введення: "; cin >> k;
	for (i = 1; i <= k; i++) {
		cout << "Введіть " << i <<" число: "; cin >> x;
		if (x % 2) par++;
		if (x > 0) kdot += x;
	}
	cout << "Кількість парних чисел  = " << par << endl << "Сума додатніх чисел = " << kdot <<endl;
	system("pause");
}*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	float y;
	for (x = -2; x <= 10; x++)
	{
		if (x > 0 and x <= 5) y = 3*x + pow(x, 1 / 3);
		if (x == 7) y = x + log10(x);
		else y = pow(abs(x+1),1/5);
		cout << "y (" << x << ") = " << y << endl;
	}
	system("pause");
}*/
//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double eps = 10e-6;
	double x, xToch =0, xBlij=0;
	int m=1, i;
	cout << "Введіть х = "; cin >> x;
	for (i = -1; i <= 1; i++) xToch += atan(x);
	while ((pow(-1, m - 1) * pow(x, 2 * m - 1) / 2 * m - 1) > eps) {
		xBlij += (pow(-1, m - 1) * pow(x, 2 * m - 1) / 2 * m - 1);
		m++;
	}
	cout << "Значення точної суми = " << xToch << endl << "Приблизне значення нескінченної суми = " << xBlij << endl;
	if (xToch == xBlij) cout << "Значення нескінченної суми рівне точній"<<endl;
	if (xToch > xBlij) cout << "Значення точної суми більше за нескінченну" << endl;
	else cout << "Значення точної суми менше за нескінченну" << endl;
	system("pause");
}*/
//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("pause");
}*/