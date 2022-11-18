#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;

// LAB 13
/*
struct ORDER
{
	char PERSON[20];
	int SUMA;
	int PLAT;
	int POL;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 8;
	int perevirka = 0;
	ORDER spisok[N];
	for (int i = 0; i < N; i++) {
		cout << "Введіть призвіще платника: ";
		cin >> spisok[i].PERSON;
		cout << "Введіть суму чеку:";
		cin >> spisok[i].SUMA;
		cout << "Введіть розрахунковий рахунок платника: ";
		cin >> spisok[i].PLAT;
		cout << "Введіть розрахунковий рахунок одержувача: ";
		cin >> spisok[i].POL;
		cout << "\n";
	}
	cout << "Введіть призвіще платника, рахунок якого хочете перевірити:" << endl;
	cin >> spisok[8].PERSON;
	for (int i = 0; i < N; i++) {
		int k = strcmp(spisok[i].PERSON, spisok[8].PERSON);
		if (!k) {
			cout << "У цього платника було знято " << spisok[i].SUMA << " грн і на його рахунку залишилось " << spisok[i].PLAT - spisok[i].SUMA << " грн" << endl;
			perevirka = 1;
		}
	}
	if (perevirka == 0) {
		cout << "В списку такого призвіща не знайдено" << endl;
	}
}*/