#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;

#include <conio.h>


// Lab 16
/*
const int n = 3, m = 5;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int i, j, mas[m];
	char fname[] = "matr.dat";
	ofstream fout(fname);
	if (!fout) cout << "Cannot open file\n";
	//-------------------------------------------
	for (i = 0; i < n; i++)
	{
		cout << "Enter " << i << " row\n";
		for (j = 0; j < m; j++) {

			mas[j] = rand() % 21 - 10;
			cout << setw(4) << mas[j];
		}
		fout.write((char*)&mas, sizeof(mas));
		cout << endl;
	}
	fout.close();
	ifstream fin(fname);
	if (!fin) cout << "Cannot open file for reading\n";
	cout << "\nOutput 2 i 1 rows of matrix\n\n";
	//-------------------------------------------
	fin.seekg(sizeof(mas));
	fin.read((char*)&mas, sizeof(mas));
	for (j = 0; j < m; j++)
		cout << setw(4) << mas[j];
	cout << endl;
	//-------------------------------------------
	fin.seekg(0);
	fin.read((char*)&mas, sizeof(mas));
	for (j = 0; j < m; j++)
		cout << setw(4) << mas[j];
	cout << endl;
	fin.close();
}*/
/*
struct BAGAZ {
	char ima[20];
	int kilk;
	float masa;
};
const int n = 6;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float m;
	BAGAZ bz[n];
	ofstream fout("bagaz.dat");
	if (!fout) cout << "Error";
	for (int i = 0; i < n; i++)
	{
		cout << "Ім'я: "; cin >> bz[i].ima;
		cout << "Кількість багажу: "; cin >> bz[i].kilk;
		cout << "Маса багажу: "; cin >> bz[i].masa; cout << endl;
		fout << bz[i].ima << setw(3) << bz[i].kilk << setw(5) << bz[i].masa << endl;
	}
	fout.close();
	cout << "Введіть масу, для перевірки багажу:" << "\n менше за - ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		if (bz[i].masa <= m and bz[i].kilk == 1) {
			ifstream fin("bagaz.dat");
			if (!fin) cout << "Error";
			cout << bz[i].ima << " має багаж, що за вагою менша за " << m << " кг\n";
			cout << "Вага багажу - " << bz[i].masa << " кг, а його кількість - 1\n" << endl;
			fin.close();
		}
		else cout << "Помилка, такого багажу не знайдено\n";
	}
}*/