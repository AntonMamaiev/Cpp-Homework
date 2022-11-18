#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;




// Lab 11
// Prog 1
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s2[50];
	cout << "Введіть рядок:" << endl;
	cin.getline(s2, 50);
	int a;
	a = strlen(s2);
	cout << "Довжина рядку: " << a;
}*/
// Prog 3
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s1[50];
	cout << "Введіть рядок:" << endl;
	cin.getline(s1, 50);
	bool opinion;
	int k=0;
	cout << "Шифрування (0) або розшифрування (1): "; cin >> opinion;
	if (opinion) {
		char s2[50];
		int a = strlen(s1);
		cout << endl;
		a = a - 1;
		for (int i = a; i > a/2; i --) {
			s2[k] = s1[i];
			k+=2;
		}
		k = 1;
		for (int i = 0; i <= a/2; i ++) {
			s2[k] = s1[i];
			k+=2;
		}
		a += 1;
		for (int i = 0; i < a; i++) {
			cout << s2[i];
		}
	}
	else if (!opinion) {
		char s2[50];
		int a = strlen(s1);
		cout << endl;
		for (int i = 1; i < a; i+=2) {
			s2[k] = s1[i];
			k++;
		}
		a -= 2;
		for (int i = a; i >= 0; i -= 2) {
			s2[k] = s1[i];
			k++;
		}
		a += 2;
		for (int i = 0; i < a; i++) {
			cout << s2[i];
		}
	}
}
*/