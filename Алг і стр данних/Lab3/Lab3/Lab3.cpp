#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
using namespace std;

struct s
{
	int top = 0;
	string data[25];
} stek;

void add(int n, int file)
{
	int maxsize = 25;
	ifstream fin("mas.txt");
	for (int i = 0; i < n; i++)
	{
		if (stek.top >= maxsize)
		{
		}
		else if (file == 0)
		{
			cout << "введіть елемент " << stek.top + 1 << " = ";
			cin >> stek.data[stek.top];
			stek.top++;
		}
		else if (file == 1)
		{

			if (!fin) cout << "error" << endl;
			fin >> stek.data[stek.top];
			stek.top++;

		}
	}
	if (stek.top >= maxsize)
	{
		cout << "Стек заповнений";
	}
	fin.close();
}

void out()
{
	int temp = stek.top;
	stek.top--;
	if (stek.top < 0)
	{
		cout << "Cтек порожній";
	}
	else
	{
		while (stek.top >= 0)
		{
			cout << stek.data[stek.top] << " ";
			stek.top--;
		}
	}
	stek.top = temp;
}

void sdelete()
{
	if (stek.top >= 0)
	{
		stek.data[stek.top] = "";
		stek.top--;
	}
	out();
}

void per(string x)
{
	int temp = stek.top;
	stek.top--;
	int t = 0;
	if (stek.top < 0)
	{
		cout << "Cтек порожній";
	}
	else
	{
		while (stek.top >= 0)
		{
			if (x == stek.data[stek.top])
			{
				cout << stek.top + 1 << "-ий елемент: " << stek.data[stek.top] << endl;
				t++;
			}
			stek.top--;
		}
		if (t == 0) { cout << "Такого елементу немае"; }
	}
	stek.top = temp;
}
int main() {

	int file, n;
	string x;
	int dia = 1;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (dia != 0) {
		cout << "\nОберіть дію: 1 - додати елемент, 2 - вивести стек, 3 - чи належить елемент стеку, 0 - завершити роботу\n";
		cin >> dia;
		switch (dia)
		{
		case 1:
			cout << "0 - записати елементи вручну, 1 - зчитати з файлу\n";
			cin >> file;
			cout << "Скільки елементів додати (не більше 25): ";
			cin >> n;
			add(n, file);
			cout << endl;
			break;
		case 2:
			out();
			break;
		case 3:
			cout << "Введіть число для перевірки: ";
			cin >> x;
			per(x);
			break;
		}
	}
}