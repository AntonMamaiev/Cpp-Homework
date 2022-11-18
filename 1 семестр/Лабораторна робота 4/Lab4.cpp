#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

//LAB 4
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x;
	int k;
	cout << "Введіть числа x та k (в межах 1-4):" << endl;
	cout << "x = "; cin >> x;
	cout << "k = "; cin >> k;
	switch (k){
	case 1: cout << "Після обчислення при k = 1, у = " << sqrt(pow(x, 4) + 1) - cos(x) << endl; break;
	case 2: cout << "Після обчислення при k = 2, у = " << exp(0.1 * x) + log(pow(x, 2)) << endl; break;
	case 3: cout << "Після обчислення при k = 3, у = " << sqrt(5 * x) + pow(1 / tan(x - M_PI), 2) << endl; break;
	case 4: cout << "Після обчислення при k = 4, у = " << x+log(fabs(x)) << endl; break;
	default: cout << "Число k не в межах від 1 до 4"<<endl;
	}
	system("pause");
}*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float z, a, b, x;
	int p;
	cout << "Введіть число х = "; cin >> x;
	cout << "Введіть варіант параметрів:" << endl;
	cout << "1 - a=1,5 ; b=5,7 ; z=tg(bx)" << endl;
	cout << "2 - a=3,7 ; b=8,4 ; z=tg(bx)" << endl;
	cout << "3 - a=4,4 ; b=5,6 ; z=tg(bx)" << endl;
	cout << "Варіант = "; cin >> p;
	switch (p) {
	case 1: a = 1.5; b = 5.7; z = tan(b * x); break;
	case 2: a = 3.7; b = 8.4; z = tan(b * x); break;
	case 3: a = 4.4; b = 5.6; z = tan(b * x); break;
	default: cout << "Помилка, введіть варіант від 1 до 3" << endl; exit(0);
	}
	if (x <= a) cout << "При таких параметрах у = " << pow(a, 3) + atan(pow(sin(b * x), 3)) + pow(cos(pow(x, 2)), 2) << endl;
	if (x >= log(b)) cout << "При таких параметрах у = " << atan(a + b * x + z) << endl;
	else cout << "При таких параметрах у = " << sqrt((a + b * x) + 2) + sin(z*x) << endl;
	system("pause");
}*/
//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c;
	int p;
	cout << "Введіть варіант параметрів:" << endl;
	cout << "1 - a= 3   ; b= 3,5   ; c= -2,1" << endl;
	cout << "2 - a= 2,1 ; b= -6,55 ; c= 0,1" << endl;
	cout << "3 - a= -9  ; b= -3,7  ; c= -0,1" << endl;
	cout << "4 - Ввести свій варіант" << endl;
	cout << "Варіант = "; cin >> p;
	switch (p) {
	case 1: a = 3; b = 3.5; c = -2.1; break;
	case 2: a = 2.1; b = -6.55; c = 0.1; break;
	case 3: a = -9; b = -3.7; c = -0.1; break;
	case 4: cout << "a = "; cin >> a; cout << "b = "; cin >> b; cout << "c = "; cin >> c; break;
	default: cout << "Помилка, введіть варіант від 1 до 4" << endl; exit(0);
	}
	if ((a > b&& a > c) && a* a == b * b + c * c || (b > a&& b > c) && b* b == a * a + c * c || (c > b&& c > a) && c* c == a * a + b * b)
		cout << "За таких параметрів трикутник прямокутний" << endl;
	else cout << "За таких параметрів трикутник НЕ є прямокутним" << endl;
	system("pause");
}*/
//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N,C,sum;
	string s = "схід",pd = "південь",z = "захід",pn = "північ";
	cout << "Ведіть вхідний напрямок робота:"<<endl;
	cout << "1 - Північ, " << "2 - Захід, " << "3 - Південь, " << "4 - Схід" << endl;
	cout << "Напрямок = "; cin >> C;
	switch (C) {
	case 1:break; case 2:break; case 3:break; case 4:break;
	default:cout << "Помилка, введіть інше значення напрямку" << endl; exit(0);
	}
	cout << "Ведіть команду для робота:" << endl;
	cout << "0 - Продовжувати рух, " << "1 - Поворот наліво, " << "-1 - Поворот направо" << endl;
	cout << "Команда = "; cin >> N;
	sum = C + N;
	cout << "Робот повернутий на ";
	switch (sum) {
	case 0: case 4: cout <<  s << endl; break;
	case 1: case 5: cout << pn << endl; break;
	case 2: cout << z << endl; break;
	case 3: cout << pd << endl; break;
	default: cout << "Помилка, введіть інші значення напрямку або команди" << endl;
	}
	system("pause");
}*/
//Задача 5
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N,k,k1;
	cout << "Введіть натуральне число = "; cin >> N;
	k = N / 4;
	k1 = N % 4;
	switch (k1) {
	case 0:  cout  << N << " = 4 * " << k << endl; break;
	case 1:  cout  << N << " = 4 * " << k <<" + 1 "<< endl; break;
	case 2:  cout  << N << " = 4 * " << k <<" + 2 "<< endl; break;
	case 3:  cout  << N << " = 4 * " << k <<" + 3 "<< endl; break;
	default: cout << "Помилка, спробуйте ще раз" << endl; exit(0);
	}
	system("pause");
}*/
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int x = 3;
	const int m = 5;
	int xm[x][m], max1[m], min1[m], max = -10, min = 10;
	int opinion, maxi = 0, mini, temp = 0;
	int sum[x], sum1 = 0, sum2 = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < m; j++)
		{
			xm[i][j] = rand() % 21 - 10;
			cout.width(4);
			cout << xm[i][j];
		}
		cout << endl;
	}
	cout << "Оберіть дію: " << endl << " 1 - Поміняти місцями ряди з найбільшою та найменшою сумою елементів" << endl;
	cout << " 2 - Поміняти стовпці з максимальним та мінімальним елементом";
	cout << endl << "Ви обираєте? - "; cin >> opinion;
	if (opinion == 1) {
		for (int i = 0; i < x; i++)
		{
			sum1 = 0;
			for (int j = 0; j < m; j++) {
				sum1 += xm[i][j];
			}
			sum[i] = sum1;
			cout << "sum" << i + 1 << " = " << sum1 << endl;
		}
		for (int i = 0; i < x; i++) {
			if (sum[0] > sum[i]) { sum1 = sum[0]; sum2 = sum[i]; }
			if (sum[0] < sum[i]) { sum1 = sum[i]; sum2 = sum[0]; }
		}
		for (int i = 0; i < m; i++)
		{
			temp = xm[sum1][i];
			xm[sum1][i] = xm[sum2][i];
			xm[sum2][i] = temp;
		}
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout.width(4);
				cout << xm[i][j];
			}
			cout << endl;
		}

	}
	if (opinion == 2) {
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++) {
				if (xm[j][i] < min) {
					min = xm[j][i];
					min1[i] = min;
				}
			}
			min = 10;
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++) {
				if (xm[j][i] > max) {
					max = xm[j][i];
					max1[i] = max;
				}
			}
			max = -10;
		}
		max = -10; min = 10;
		for (int i = 0; i < 5; i++)
		{
			if (max1[i] > max) { max = max1[i]; maxi = i; }
			if (min1[i] < min) { min = min1[i]; mini = i; }
		}
		cout << endl << "min = " << min << " (" << mini + 1 << " ряд)" << " max = " << max << " (" << maxi + 1 << " ряд)" << endl;
		cout << "Меняем ряды " << mini + 1 << " и " << maxi + 1 << endl;
		max = 0;
		for (int i = 0; i < x; i++)
		{
			max = xm[i][maxi];
			xm[i][maxi] = xm[i][mini];
			xm[i][mini] = max;
		}
		cout << endl;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout.width(4);
				cout << xm[i][j];
			}
			cout << endl;
		}
	}
}