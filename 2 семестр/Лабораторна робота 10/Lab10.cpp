#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;



//Lab 10
// Prog 1
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int x, sum = 0, k = 0;
	cout << "Введіть кількість елементів масиву: "; cin >> x;
	while (x < 2) {cout << "Введіть х знову (х>2): "; cin >> x;}
	int* mas = new int[x];
	for (int i = 0; i < x; i++)
	{
		mas[i]= rand() % 21 - 10;
		cout.width(4);
		cout << mas[i];
	}
	cout<<endl<<endl;
	for (int i = 0; i < x / 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum += mas[k];
			cout.width(4);
			cout << mas[k];
			k++;
		}
		cout << " sum: " << sum << endl;
		sum = 0;
	}
	delete[]mas;
}*/

// Prog 2
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int i, j, rowc = 0, k = 0;
	int x, y;
	cout << "Введіть розмірність першої матриці: " << endl << "Рядків = "; cin >> x;
	cout << "Стовпчиків = "; cin >> y;
	int** a = new int* [x];
	for (int i = 0; i < x; i++) a[i] = new int[y];
	int* r = new int[x];
	for (int i = 0; i < x; i++) r[i] = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			a[i][j] = rand() % 21 - 10;
			if (a[i][j] == 0)  r[i]++;
			cout.width(4);
			cout << a[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < x; i++) if (r[i] == 0) rowc++;
	double** b = new double* [rowc];
	for (i = 0; i < rowc; i++) b[i] = new double[y];
	for (i = 0; i < x; i++)
		if (r[i] == 0) {
			for (j = 0; j < y; j++) b[k][j] = a[i][j];
			k++;
		}
	cout << "Матриця без рядів з 0: \n";
	for (i = 0; i < rowc; i++) {
		for (j = 0; j < y; j++) {
			cout.width(4);
			cout << b[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < rowc; i++) {
		delete[] b[i];
		delete[] a[i];
	}
	delete[]b;
	delete[]a;
}*/

// Prog 3
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int n, m, max = 0, maxi, maxj, x=0, y=0;
	cout << "Введіть розмірність першої матриці: " << endl << "Рядків = "; cin >> n;
	cout << "Стовпчиків = "; cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) a[i] = new int[m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 101 - 50;
			cout.width(4);
			cout << a[i][j];
			if (abs(a[i][j]) > max) { max = abs(a[i][j]); maxi = i; maxj = j; }
		}
		cout << endl;
	}
	cout << "Максимальний по модулю елемент: "<< a[maxi][maxj]<<" ("<<maxi<<";"<<maxj<<") "<< endl;
	cout << "Матриця без рядів і стовпців, у якому максимальний по модулю елемент:" << endl;
	int** b = new int* [n-1];
	for (int i = 0; i < n-1; i++) b[i] = new int[m-1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i != maxi and j != maxj) {
				b[x][y] = a[i][j]; y++;
				if (y == m - 1) y = 0;
			}
		}
		if (i != maxi) x++;
		if (x == n - 1) x = 0;
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			cout.width(4);
			cout << b[i][j];
		}
		cout << endl;
	}
}*/
