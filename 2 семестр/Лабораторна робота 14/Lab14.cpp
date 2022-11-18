#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;

// Lab 14
/*
struct ORDER
{
	int SUMA;
	int PLAT;
	int POL;
	bool PRIZN;
	union {
		int kilk_tov;
		char nazva_posl[20];
	} NAZVA;
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 8;
	ORDER spisok[N];
	for (int i = 0; i < N; i++) {
		cout << "-------------------- " << i+1 << " --------------------" << endl;
		cout << "Введіть суму чеку: ";
		cin >> spisok[i].SUMA;
		cout << "Введіть розрахунковий рахунок платника: ";
		cin >> spisok[i].PLAT;
		cout << "Введіть розрахунковий рахунок одержувача: ";
		cin >> spisok[i].POL;
		cout << "Введіть оплачується товар(1) чи послуга(0): ";
		cin >> spisok[i].PRIZN;
		if (spisok[i].PRIZN) {
			cout << "Введіть кількість товару: ";
			cin >> spisok[i].NAZVA.kilk_tov;
		}
		else {
			cout << "Введіть назву послуги: ";
			cin >> spisok[i].NAZVA.nazva_posl;
		}
		cout << "\n";
	}
	int numb;
	cout << "Введіть номер платника, рахунок якого хочете перевірити:" << endl;
	cin >> numb;
	numb -= 1;
	for (int i = 0; i < N; i++) {
		if (i == numb) {
			cout << "У цього платника було знято " << spisok[i].SUMA << " грн і на його рахунку залишилось " << spisok[i].PLAT - spisok[i].SUMA << " грн" << endl;
			if (spisok[i].PRIZN) {
				cout << "Cумарно оплачено " << spisok[i].NAZVA.kilk_tov << " товарів" << endl;
			}
			else {
				cout << "Оплачено одну послугу: " << spisok[i].NAZVA.nazva_posl << endl;
			}
		}
	}
}*/
