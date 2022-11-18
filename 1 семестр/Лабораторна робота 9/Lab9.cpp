#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;



//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int m = 4, n = 4;
	int a[m][n], i,j, k=0,z;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = rand() % 31 - 10;
			cout.width(3);
			cout <<a[i][j] <<" ";
			z = a[i][j] % 6;
			if (z == 1) k++;
		}
		cout<<endl;
	}
	cout << "Кількість елементів, що при ділені на 6 мають залишок 1: k = " << k << endl;
	system("pause");
}*/

//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int m = 5, n = (m*m+m)/2;
	int a[m] = { 0 }, b[n][n] = { 0 }, k = 0;
	cout << "Одновимірний масив: " << endl;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 21 - 10;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if(j >= i){
				b[i][j] = b[j][i] = a[k++];
			}
		}
	}
	cout << "До виконання дій: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j < i) {
				cout.width(4);
				cout << ' ';
			}
			else {
				cout.width(4);
				cout << b[i][j];
			}
		}
		cout << endl;
	}
	cout << "Після: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++) {
			cout.width(4);
			cout << b[i][j];
		}
		cout << endl;
	}
	system("pause");
}*/

//Задача 3
/*int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 3, m = 2;
	int a[n][n],b[n][m] ,k=0 ,N, z=0;

	cout << "Введіть n = "; cin >> N;
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = n-1; j >= 0; j--) {
			a[i][j] =N - (j+k);
			if (j >= i)  a[i][j] = a[j][i] ;
			z++;
			cout.width(4);
			cout << a[i][j];
		}
		k++;
		cout << endl;
		if (z == 9){cout << "000000000000" << endl;}
	}
	k = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			b[i][j] = N - (j + k);
			if (b[i][j] == 0) b[i][j] = N - 1;
			cout.width(4);
			cout << b[i][j];
		}
		k--;
		cout << endl;
	}
	system("pause");
}*/

//Задача 4

/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 5, m = 5;
	int j, i, fin, a[n][m], x = 0, z = 0, c = 0, min[n], max[n];
	cout << "Яким чином наповнювати масив: 1 - з клавіатури, 2 - рандом" << endl << "ЯК = "; cin >> x;
	while (x > 2 or x < 1) { cout << "Введіть 1 чи 2 = "; cin >> x; }
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			min[j] = 20000000;
			max[j] = -20000000;
			if (x == 2) {
				a[i][j] = rand() % 21 - 10;
				cout.width(3);
				cout << a[i][j] << " ";
			}
			if (min[j] > a[i][j]) { min[j] = a[i][j]; }
			if (max[j] < a[i][j]) { max[j] = a[i][j]; }
			if (x == 1) { cin >> a[i][j]; }
		}
		if (x == 2) cout << endl;
	}
	if (x == 1) {
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				cout.width(3);
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << "Після обробки за умовою задачі" << endl;
	for (i = 0; i < m; i++) {
		c = 0; z = 0;
		for (j = 0; j < n; j++) {
			max[j] = z; a[i][1] = max[j]; z = max[j];
			min[j] = c; a[i][5] = min[j]; c = min[j];
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
*/
