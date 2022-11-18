в#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;

// Курсач

// 1
/*
int main()
{
	float x = 0.25, y = 0.79, z = 0.81; // Оголошення змінних
	cout << "x = " << x << "; y = " << y << "; z = " << z << ";" << endl;
	cout << endl << "P = " << (1 + pow(sin(x + 1), 2)) / (2 + abs(x - (2 * pow(x, 3)) / (1 + pow(x, 2) * pow(y, 2)))) + pow(x, 4) << endl;// Виведення на екран змінної Р разом з обчисленням її значення
	cout << "Q = " << pow(cos(atan(1 / z)), 2) << endl;// Виведення на екран змінної Q разом з обчисленням її значення
}*/
// 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); // Підключення української мови

	srand(time(NULL));
	// Оголошення змінних
	float kord[10][2];
	int r, k1 = 0, k2 = 0, k3 = 0, k4 = 0; 
	cout << "Як вказати координати: 1 - рандом, 2 - вручну" << endl << "Ви обираєте = ";
	cin >> r;
	if (r == 1 and r == 2) {
		if (r == 1) { // Наповнення масиву рандомними значеннями
			cout << "  x     y  " << endl;
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 2; j++)
				{
					kord[i][j] = (rand() % 2000) / 100. - 10;
					cout.width(5);
					cout << kord[i][j]<<" ";
				}
				cout << endl;
			}
		}
		if (r == 2){ // Наповнення масиву значеннями з клавіатури
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 2; j++)
				{
					cout << "x" <<i+1 <<" y"<<j+1<<" = ";
					cin >> kord[i][j];
				}
			}
			cout << "  x     y  " << endl;
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 2; j++)
				{
					cout.width(5);
					cout << kord[i][j]<<" ";
				}
				cout << endl;
			}
		}
		// Перевірка значень за чвертями
		for (int i = 0; i < 10; i++){
			if (kord[i][0] > 0 and kord[i][1] > 0) k1++;// х + у + (перша чверть)
			if (kord[i][0] < 0 and kord[i][1] > 0) k2++;// х - у + (друга чверть)
			if (kord[i][0] < 0 and kord[i][1] < 0) k3++;// х - у - (третя чверть)
			if (kord[i][0] > 0 and kord[i][1] < 0) k4++;// х + у - (четверта чверть)
		}
		cout << endl;
		// Перевірка у якій чверті найбільше точок та виведення цієї чверті
		if (k1 > k2 and k1 > k3 and k1 > k4) cout << "Найбільше точок знаходиться у 1 чверті = " << k1;
	    if (k2 > k1 and k2 > k3 and k2 > k4) cout << "Найбільше точок знаходиться у 2 чверті = " << k2;
		if (k3 > k1 and k3 > k2 and k3 > k4) cout << "Найбільше точок знаходиться у 3 чверті = " << k3;
		if (k4 > k1 and k4 > k2 and k4 > k3) cout << "Найбільше точок знаходиться у 4 чверті = " << k4;
		cout << endl;
	}
	else { cout << "Error\n"; return(0); }
}*/
// 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);// Підключення української мови

	srand(time(NULL));

	// Оголошення змінних
	const int a = 16;
	double x[a];
	int k;
	// Наповнення масиву рандомними значеннями
	for (int i = 0; i < a; i++) {
		x[i] = (rand() % 2000) / 100. - 10;
	}
	// Виведення елементів масиву
	cout << "|";
	for (int i = 0; i < a; i++) { cout << x[i] << "|"; }
	// Вибір дії
	cout << endl << "Оберіть дію:" << endl << "1 - переставити сусідні елементи місцями " << endl << "2 - переставити елементи у зворотньому порядку" << endl;
	cout << "Ваша відповідь = "; cin >> k;
	if (k != 1 && k != 2) { cout << "Error "; return (0); } // Перевірка
	// Дія 1
	if (k == 1) {
		// Оголошення локальних змінних
		int tmp1 = 0;
		double q;
		cout << "Ведіть номер елементу, який хочете поміняти з наступним (від 0 до 15) = "; cin >> tmp1;
		// Заміна значеннь
		if (tmp1 == a-1) {
			q = x[tmp1];
			x[tmp1] = x[0];
			x[0] = q;
		}
		if (tmp1 >= 0 && tmp1 < a-1) {
			q = x[tmp1];
			x[tmp1] = x[tmp1 + 1];
			x[tmp1 + 1] = q;
		}
		else { cout << "Error "; return (0); }
		// Виведення оновленого масиву
		cout << "|";
		for (int i = 0; i < a; i++) { cout << x[i] << "|"; }
		}
	// Дія 2
	if (k == 2) {
		// Оголошення локальних змінних
		double tmp2 = 0;
		// Заміна значеннь у зворотньому порядку
		for (int i = 0; i < a / 2; i++)
		{
			tmp2 = x[a - 1 - i];
			x[a - 1 - i] = x[i];
			x[i] = tmp2;
		}
		// Виведення оновленого масиву
		cout << "|";
		for (int i = 0; i < a; i++) { cout << x[i] << "|"; }
	}
}
*/
// 4
/*
int main()
{
	// Підключення української мови
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	// Оголошення змінних
	const int x = 3;
	const int m = 5;
	int xm[x][m], max1[m], min1[m], max = -10, min = 10;
	int opinion, maxi=0, mini;
	int sum[x], sum1=0, sum2=0, si =0, sj=0, temp = 0;
	// Наповнення масиву рандомними значеннями та вивід його на екран
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
	// Вибір режиму роботи програми
	cout << "Оберіть дію: " << endl << " 1 - Поміняти місцями ряди з найбільшою та найменшою сумою елементів" << endl;
	cout << " 2 - Поміняти стовпці з максимальним та мінімальним елементом";
	cout << endl << "Ви обираєте? - "; cin >> opinion;
	// Перевірка
	if (opinion != 1 or opinion != 2) { cout << "Error\n"; return(0);}
	// Перший режим
	if (opinion == 1) {
		// Блок обчислень
		for (int i = 0; i < x; i++)
		{
			sum1 = 0;
			for (int j = 0; j < m; j++) {
				sum1 += xm[i][j];
			}
			sum[i] = sum1;
			cout << "sum"<<i+1<<" = " << sum1 << endl;
		}
		// Знаходимо ряд з найбільшою та найменшою сумою
		for (int i = 0; i < x; i++) {
			if (sum[i] >= sum[0] and sum[i] >= sum[1] and sum[i] >= sum[2]) { sum1 = sum[i]; }
			else if (sum[i] <= sum[0] and sum[i] <= sum[1] and sum[i] <= sum[2]) { sum2 = sum[i]; }
		}
		for (int i = 0; i < x; i++) {
			if (sum[i] == sum1) si = i;
			else if (sum[i] == sum2) sj = i;
		}
		for (int i = 0; i < m; i++)
		{
			temp = xm[si][i];
			xm[si][i] = xm[sj][i];
			xm[sj][i] = temp;
		}
		// Вивід оновленої матриці
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
	// Другий режим
	else if (opinion == 2) {
		// Блок обчислень
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++) {
				if (xm[j][i] < min) {
					min = xm[j][i];
					min1[i] = min;
				}
				if (xm[j][i] > max) {
					max = xm[j][i];
					max1[i] = max;
				}
			}
			min = 10;
			max = -10;
		}
		
		max = -10; min = 10;
		for (int i = 0; i < 5; i++)
		{
			if (max1[i] > max) { max = max1[i]; maxi = i; }
			else if (min1[i] < min) { min = min1[i]; mini = i; }
		}
		cout << endl << "min = " << min << " ("<<mini + 1 <<" ряд)" << " max = " << max << " (" << maxi+1 << " ряд)" << endl;
		cout << "Міняємо ряди "<<mini+1<<" та "<<maxi+1 << endl;
		max = 0;
		for (int i = 0; i < x; i++)
		{
			max = xm[i][maxi];
			xm[i][maxi] = xm[i][mini];
			xm[i][mini] = max;
		}
		// Виведення опрацьованої матриці
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
*/
// 5
/*
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);// Підключення української мови

	float x, y;// Оголошення зміних у програмі прикладі
	cin >> x;
	// Обчислення програми прикладу
	if (x >= 0) y = pow(x, 2) + 3 * x + 5;
	else y = (x * 2) / (x * (-2));
	// Вивід обчислень програми прикладу
	cout << y;
	// Оголошення операторів, які будемо шукати у програмі
	char oper1[] = ";>><<", oper2[] = "if";
	int ifi = 0, fin = 0;
	// Оголошення коду програми прикладу у чарівському масиві 
	char prog[] = "float x, y; cin >> x; if (x >= 0) y = pow(x, 2) + 3 * x + 5; else y = (x * 2) / (x * (-2)); cout << y; ";
	int dlin = strlen(prog) - 1;
	cout << endl << "Код реалізованої програми:" << endl;
	// Розрахунок кількості операторів серед програми прикладу
	for (int i = 0; i < dlin; i++)
	{
		if (prog[i] == oper2[0] and prog[i + 1] == oper2[1]) ifi++;
		if (prog[i] == oper1[0] or prog[i] == oper1[1] and prog[i] == oper1[2]) fin++;
		if (prog[i] == oper1[3] and prog[i] == oper1[4]) fin++;
		cout << prog[i];
	}
	// Вивід результатів
	cout << endl << "Кількість операторів: " << fin+ifi << endl << "Кількість операторів if: " << ifi << endl;
}
*/
// 6
/*
// Оголошення структури
struct People
{
	char LastName[20];
	int data;
	bool gender;
	char sport[20];
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);// Підключення української мови
	// Оголошення зміних
	char gymnastka[] = "гімнастка";
	const int N = 6;
	People people[N];
	// Наповнення масиву значеннями
	for (int i = 0; i < N; i++) {
		cout << "Введіть призвіще: ";
		cin >> people[i].LastName;
		cout << "Введіть рік народження: ";
		cin >> people[i].data;
		cout << "Введіть стать [1-чоловік][0-жінка]: ";
		cin >> people[i].gender;
		cout << "Введіть назву спорту: ";
		cin >> people[i].sport;
		cout << "\n";
	}
	// Вибір режиму роботи програми
	int rik = 0, opinion;
	cout << "Оберіть дію: " << endl << " 1 - задайте рiк народження легкоатлетiв, що хочете дiзнатись " << endl;
	cout << " 2 - Вивести список жiнок гімнасток ";
	cout << endl << "Ви обираєте? - "; cin >> opinion;
	// Перший режим
	if (opinion == 1) {
		cout << "Введіть рік ";
		cin >> rik;
		for (int i = 0; i < N; i++) {
			if (rik == people[i].data) {
				cout << people[i].LastName << "\t" << people[i].data << "\t" << people[i].gender << "\t" << people[i].sport;
				cout << endl;
			}
		}
	}
	// Другий режим
	else if (opinion == 2) {
		int k;
		for (int i = 0; i < N; i++) {
			k = strcmp(people[i].sport, gymnastka);
			if (!people[i].gender && !k ) {
				cout << people[i].LastName << "\t" << people[i].data << "\t" << people[i].gender << "\t" << people[i].sport;
				cout << endl;
			}
		}
	}
	// При неправильному вводі режиму дії
	else {
		cout << "Помилка"; return(0);
	}
}
*/
// 7
/*
// Функція знаходження суми
int sum(int** mas, int m, int x) {
	int min = 10, max = -10, maxi = 0, mini = 0;
	int sum = 0, temp = 0, t = 0;
	const int m1 = m;
	int xm = x * m;
	int* masrad = new int[xm];
	// Запис елементів з двовимірної матриці mas в одновимірний масив masrad
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < x; j++) {
			masrad[t] = mas[i][j];
			t++;
		}
	}
	cout << endl;
	// Знаходження мінімуму та максимуму
	for (int i = 0; i < xm; i++) {
		if (max < masrad[i]) { max = masrad[i]; maxi = i; }
		else if (min > masrad[i]) { min = masrad[i]; mini = i; }
		cout.width(4);
		cout << masrad[i];
	}
	cout << endl << "max = " << max << " maxi = " << maxi << endl;
	cout << "min = " << min << " mini = " << mini <<  endl;
	if (mini > maxi) {
		temp = mini; mini = maxi; maxi = temp;
	}
	// Знаходження суми елементів між мінімумом і максимумом
	for (int i = mini+1; i < maxi; i++)
	{
		sum += masrad[i];
	}
	return sum;
}
// Функція знаходження кількості між мінімумом і максимумом
int kilk(int** mas, int m, int x) {
	int min = 10, max = -10, maxi = 0, mini = 0;
	int k = 0, temp = 0, t = 0;
	const int m1 = m;
	int xm = x * m;
	int* masrad = new int[xm];
	// Запис елементів з двовимірної матриці mas в одновимірний масив masrad
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < x; j++) {
			masrad[t] = mas[i][j];
			t++;
		}
	}
	// Знаходження мінімуму та максимуму
	for (int i = 0; i < xm; i++) {
		if (max < masrad[i]) { max = masrad[i]; maxi = i; }
		else if (min > masrad[i]) { min = masrad[i]; mini = i; }
		
	}
	if (mini > maxi) {
		temp = mini; mini = maxi; maxi = temp;
	}
	// Знаходження кількості елементів між мінімумом і максимумом
	for (int i = mini + 1; i < maxi; i++)
	{
		k++;
	}
	return k;
}
// Функція заповнення масиву випадковими елементами
void fill_rand(int** mas, int m, int x) {
	for (int i = 0; i < m; i++) mas[i] = new int[x];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < x; j++)
		{
 			mas[i][j] = rand() % 101 - 50;
			cout.width(4);
			cout << mas[i][j];
		}
		cout << endl;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);// Підключення української мови
	srand(time(NULL));
	// Введення розмірностей 3-х матриць
	int m, x;
	cout << "Введіть розмірність першої матриці: " << endl << "Рядків = "; cin >> m; cout << "Стовпчиків = "; cin >> x;
	int n, y;
	cout << "Введіть розмірність другої матриці: " << endl << "Рядків = "; cin >> n; cout << "Стовпчиків = "; cin >> y;
	int o, z;
	cout << "Введіть розмірність третьої матриці: " << endl << "Рядків = "; cin >> o; cout << "Стовпчиків = "; cin >> z;
	int** mx = new int* [m];
	int** ny = new int* [n];
	int** oz = new int* [o];
	// Заповнення матриць, після використання функції sum i kilk і вивід результату
	fill_rand(mx, m, x);
	cout << endl << "Сума між максимальним та мінімальними значеннями: " << sum(mx, m, x) << endl;
	cout << "Кількість елементів між максимальним та мінімальними значеннями: " << kilk(mx, m, x) << endl << endl;
	fill_rand(ny, n, y);
	cout << endl << "Сума між максимальним та мінімальними значеннями: " << sum(ny, n, y) << endl;
	cout << "Кількість елементів між максимальним та мінімальними значеннями: " << kilk(ny, n, y) << endl << endl;
	fill_rand(oz, o, z);
	cout << endl << "Сума між максимальним та мінімальними значеннями: " << sum(oz, o, z) << endl;
	cout << "Кількість елементів між максимальним та мінімальними значеннями: " << kilk(oz, o, z) << endl << endl;
}
*/
// 8
/*
#include <fstream>
// Оголошення структури
struct STUDENT {
	char prz[10];
	char inic[4];
	int bali;
	char grup[10];
};
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);// Підключення української мови
	// Оголошення змінних
	const int n = 5;
	int NEatest = 60;
	int ipz = 0, k =0, kn=0;
	STUDENT st[n];
	ofstream fout("stud.dat"); // відкрити запис у файл stud.dat
	if (!fout) cout << "Error";
	cout << "Вводити бали студентів від 0 до 100\n";
	// Наповнення масиву значеннями
	for (int i = 0; i < n; i++)
	{
		cout << "Призвіще: "; cin >> st[i].prz;
		cout << "Ініціали: "; cin >> st[i].inic;
		cout << "Назва групи: "; cin >> st[i].grup; 
		cout << "Бали: "; cin >> st[i].bali;
		cout << endl;
		fout<<setw(12) << st[i].prz << setw(6) << st[i].inic << setw(12) << st[i].grup << setw(5) << st[i].bali << endl;
	}
	fout.close();// закрити запис у файл stud.dat
	ifstream fin("stud.dat"); // відкрити запис у файл stud.dat
	if (!fin) cout << "Error";
	// Блок розв'язку
	for (int i = 0; i < n; i++)
	{
		if (st[i].bali < NEatest) {
			k++;
			char perev1[] = "ІПЗ19123";
			char perev2[] = "КН19122";
			cout << st[i].prz << " " << st[i].inic << " з групи " << st[i].grup << " Неастестований\n";
			cout << "Набрав - " << st[i].bali << " що менше за мінімальні 60 балів\n" << endl;
			if (!strcmp(st[i].grup, perev2)) { kn++; }
			if (!strcmp(st[i].grup, perev1)) { ipz++; }
		}
	}
	// Перевірка відповіді і вивід результату
	if (k == 0) cout << "Помилка, усі студенти атестовані\n";
	if (ipz < kn) cout << "\nНайбільше кількість неатестованих студентів у групі КН19122: їх "<< kn << "\n";
	if (ipz > kn) cout << "\nНайбільше кількість неатестованих студентів у групі ІПЗ19123: їх "<<ipz<<"\n";
	fin.close();
}
*/