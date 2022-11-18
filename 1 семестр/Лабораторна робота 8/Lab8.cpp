#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;
//Lab 8
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 8;
	int i,maxi, max = -2000000, a[8];
	cout << "Введіть елементи одновимірного масиву А(8)"<<endl;
	for (i = 0; i < n; i++) {
		cout <<"a [" << i << "] = "; cin >> a[i];
		if (i % 2 == 0 and a[i] % 2 == 0) {
			if (max < a[i]) { max = a[i]; maxi = i; }
		}
	}
	cout << "Найбільший парний елемент масиву, що має парний індекс: a["<<maxi<<"] = " << max << endl;
	system("pause");
}
*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 10;
	int a[n], i,k=0 , b[n];
	cout << "Ряд чисел а = ";
	for (i = 0; i < n; i++) {
		a[i] = rand() % 21 - 10;
		cout << a[i] << " ; ";
	}
	cout << endl;
	for (int e = 0; e<n; e++) {
		if (a[e] > 0 and a[e] % 2) {
			b[e] = a[e]; cout << "b [" << k << "] = " << b[e] << endl; k++;}
	}
	if (k == 0) cout << "Серед ряду чисел немає додатніх непарних чисел" << endl;
	system("pause");
}*/

//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 10000;
	double a[n], z, sum = 0;
	int i, e = 0, fib[n];
	fib[0] = 1; fib[1] = 1; fib[2] = 2;
	cout << "Введіть кількість чисел масиву = "; cin >> z;
	while (z <= 0) {
		cout << "Помилка, число не додатні" << endl;
		cout << "Введіть кількість чисел масиву = "; cin >> z;
	}
	for (int f = 3; f < z; f++) {
		fib[f] = fib[f - 1] + fib[f - 2];
	}
	for (int m = 0; m < z; m++) {
		cout << fib[m] << " ; ";
	}
	cout << endl;
	for (i = 0; i < z; i++) {
		a[i] = (rand() % 2000) / 100. - 10;
		cout << "a [" << i << "] = " << a[i] <<endl;
		if (fib[i] == i) sum+=a[i];
	}
	cout << "Сума чисел, порядкові номери яких є числа фібоначі = " << sum << endl;
	system("pause");
}
*/

//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 10;
	int a, b, r1, r2, k[n] = {0}, per1 , per2, sum=0;
	cout << "Розгадайте ключ для сейфу" << endl;
	a = rand() % 10 ; b = rand() % 10;
	while (a == b) { a = rand() % 10; b = rand() % 10; }
	r1 = rand() % 6 + 1; r2 = rand() % 6 + 1;
	k[a] = r1; k [b] = r2;
	for (int i = 0; i < n; i++) {
		cout << " | " << setprecision(5) <<i <<" | ";
	}
	cout << endl;
	for (int e = 0; e < n; e++) {
		cout << " | " <<setprecision(5)<< k[e] << " | ";
	}
	cout << endl<< "Наповнюйте значення так, щоб 3 сусідні комірки дорівнюють 10";
	cout << endl << "Виберіть числа від підкидуйте кубик поки і вставляйте у комірку" << endl;
	while (sum != 10) {
		cout << "Виберіть рядок, де будете підкидувати кубик = "; cin >> per1; cout << endl;
		while (per1 == a or per1 == b or per1>=10 or per1<0) {
			cout << "ПОМИЛКА, спробуйте ще раз" << endl;
			cout << "Виберіть рядок, де будете підкидувати кубик = "; cin >> per1;
		}
		per2 = rand() % 6 + 1;
		cout << "Гральний кубик випав, число зверху = " << per2 << endl; cout << endl;
		k[per1] = per2;
		cout << "Тепер замок виглядає так: " << endl;
		for (int i = 0; i < n; i++) { cout << " | " << setprecision(5) << i << " | "; }
		cout << endl;
		for (int e = 0; e < n; e++) { if (k[e] + k[e + 1] + k[e + 2] == 10) { sum = 10; } cout << " | " << setprecision(5) << k[e] << " | "; }
		cout << endl;
		}
	cout << "ВИ ПЕРЕМОГЛИ!" << endl;
	system("pause");
}*/

//Задача 5
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 30;
	int i, x[n], y[n], dl, mod = -1, max = -11, may =  11 , imin,imax;
	for (i = 0; i <= n; i++) {
		x[i] = rand() % 21 - 10;
		y[i] = rand() % 21 - 10;
		cout << i << " = ( " << x[i] << " ; " << y[i] << " )" << endl;
		if (x[i] + y[i] > max) {
			if (x[i] > y[i]) { max = x[i];}
			if (x[i] < y[i]) { max = y[i];}
			imax = i; }
		if (x[i] + y[i] < may) {
			if (x[i] < y[i]) { may = x[i]; }
			if (x[i] > y[i]) { may = y[i]; }
			imin = i; }
	}
	cout << "Максимальна довжина між точками "<<imax<<" = ( " << x[imax] << " ; " << y[imax] << " )" << " та "<< imin << " =( " << x[imin] << " ; " << y[imin] << " )" << endl;
	system("pause");
}*/