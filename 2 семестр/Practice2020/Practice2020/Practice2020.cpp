//Практика
// 1 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду

//Визначити координати проекції кола із центром у точці (х;у) та радіусом r на осі координат
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "Введіть координати центру кола та його радіус: \n";
	cout << "x = "; cin >> x; cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	float xkor1 = x-r , xkor2 = x+3, ykor1 = y+r, ykor2= y-r;
	cout << "Проекції кола на ось координат:\n";
	cout << "x1 = (" << xkor1 << " ; 0)\n";
	cout << "x2 = (" << xkor2 << " ; 0)\n";
	cout << "y1 = (0 ; " << ykor1 << ")\n";
	cout << "y2 = (0 ; " << ykor2 << ")\n";
}
*/

// 2 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, z;
	cout << "Введіть числа: \n";
	cout << "x = "; cin >> x; cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	cout << "Тоді а = " << (1 + pow(sin(x + y), 2)) / (2 + abs(x - 2 * x / (1 + pow(x, 2) * (y, 2)))) + x << "\n";
}
*/
// 3 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "Введіть число n = "; cin >> n; 

	if (n >= 10000) { cout << "Помилка, n має бути меншим за 10000\n"; return(0); }
	else if (n >= 10 && n < 100)
	{
		int a = n / 10;
		int b = n % 10;
		if (a == b) cout << "Число є паліндромом" << endl;
		else cout << "Число НЕ є паліндромом" << endl;
	}
	else if (n >= 100 && n < 1000)
	{
		int a = n / 100;
		int b = n % 100 / 10;
		int c = n % 10;
		if (a == c) cout << "Число є паліндромом" << endl;
		else cout << "Число НЕ є паліндромом" << endl;
	}
	else if (n>=1000 && n<10000)
	{
		int a = n / 1000;
		int b = n % 1000 / 100;
		int c = n % 100 / 10;
		int d = n % 10;
		if (a == d && b == c) cout << "Число є паліндромом" << endl;
		else cout << "Число НЕ є паліндромом" << endl;
	}

}
*/
// 4 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "Введіть координати точки: \n";
	cout << "x = "; cin >> x; cout << "y = "; cin >> y;
	if (x <= 1 && x >= -1 && y <= 1 && y >= -1) cout << "Точка належить зафарбованій частині площини\n";
	else cout << "Точка НЕ належить зафарбованій частині площини\n";
}
*/
// 5 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	float fin=0, step = 2;
	cout << "Введіть число n = "; cin >> n;
	for (float i = 0; i < n; i++)
	{
		fin += pow(abs(sin(i + 1)),1/step);
		step *= 2;
	}
	cout << "Результат: " << fin << endl;
}
*/
// 6 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	float a, fin=1;
	cout << "Введіть число n = "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a" << i + 1 << " = ";cin >> a;
		fin *= sqrt(abs(a));
	}
	cout << "Результат: " << fin << endl;
}
*/
// 7 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int a, k = 0;
	cout << "Введіть число n = "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a" << i << " = "; cin >> a;
		if (i%2 != 0 && a % 2 == 0){ k++; cout << "+\n";}
	}
	cout << "Результат: " << k << endl;
}
*/
// 8 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
#include <time.h> // підключення генератору рандомних чисел
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int n;
	double a, min =2147483647, max = -2147483648;
	cout << "Введіть число n = "; cin >> n;
	for (int i = 0; i < n; i++) {
		a = (rand() % 2000) / 100. - 10;
		cout << a << " | ";
		if (a == 0) i = n - 1;
		if (max < a) max = a;
		if (min > a) min = a;
	}
	cout << "\n\nДобуток максимуму і мінімуму: "<<"\nmax = "<<max<<"\nmin = "<<min<<"\nmax*min = "<< max*min << endl;
}
*/
// 9 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <math.h> // бібліотека математичних функцій
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 1, j = 1;
	double dob = 1, sum = 0;
	for ( i ; i <= 50; i++) {
		for (j; j <= 20; j++) {
			sum += pow(j, 2);
		}
		dob *= (2 + sum);
	}
	cout << "Цикл дорівнює: " << dob<<endl;
}
*/
// 10 завдання
/*
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <time.h> // підключення генератору рандомних чисел
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	srand(time(NULL));
	const int i = 15;
	int j = 1, a[i], b[i],c[i] ;
	for (j; j <= i; j++) {
		a[j-1] = rand() % 101 - 50;
		cout << "a[" << j << "] = " << a[j - 1] << endl;
		b[j-1] = rand() % 101 - 50;
		cout << "b[" << j << "] = " << b[j - 1] << endl << endl;
		c[j - 1] = a[j - 1] + b[j - 1];
	}
	cout << "c[i] = a[i] + b[i]\n\n";
	for (j = 1; j <= i; j++) {
		cout << "c[" << j << "] = " << c[j - 1] << endl;
	}
}
*/
// 11 завдання
/*
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <time.h> // підключення генератору рандомних чисел
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	const int i = 30;
	srand(time(NULL));
	int k = 29;
	double a[i], b[i], sum=0;
	for (int x = 0; x < i; x++) {
		a[x] = (rand() % 2000) / 100. - 10;
		cout << "a[" << x+1 << "] = " << a[x] << endl;
		b[k] = (rand() % 2000) / 100. - 10;
		cout << "b[" << k+1 << "] = " << b[k] << endl << endl;
		sum += (a[x] * b[k]);
		k--;
	}
	cout << "sum (a[1]*b[30]) + (a[2]*b[29])...(a[30]*b[1]) = " << sum;
}
*/
// 12 завдання
/*
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <time.h> // підключення генератору рандомних чисел
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	srand(time(NULL));
	const int i = 10;
	int mas1[i], mas2[i], masFin[i * 2], k = 0;
	cout <<"mas1 = { ";
	for (int j = 0; j < i; j++) {
		mas1[j] = rand() % 101 - 50;
		cout << mas1[j]<< " ";
		mas2[j] = rand() % 101 - 50;
	}
	cout << "}\n" << "mas2 = { ";
	for (int j = 0; j < i; j++)
		cout << mas2[j] << " ";
	cout << "}\n";
	for (int j = 0; j < i; j++) {
		if (j % 2 != 0) {
			masFin[k] = mas1[j];
			k++;
		}
	}
	for (int j = 0; j < i; j++) {
		if (j % 2 != 0) {
			masFin[k] = mas2[j];
			k++;
		}
	}
	for (int j = 0; j < i; j++) {
		if (j % 2 == 0) {
			masFin[k] = mas1[j];
			k++;
		}
	}
	for (int j = 0; j < i; j++) {
		if (j % 2 == 0) {
			masFin[k] = mas2[j];
			k++;
		}
	}
	cout <<"\nmas3 = { ";
	for (int j = 0; j < (i*2); j++)
		cout << masFin[j] << " ";
	cout << "}\n";
} 
*/
// 13 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <time.h> // підключення генератору рандомних чисел
#include <math.h> // бібліотека математичних функцій
#include <iomanip>
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int n;
	cout << "Введіть розмірність матриці: n = "; cin >> n;
	cout << "Матриця:\n";
	float** a = new float* [n];
	for (int i = 0; i < n; i++) a[i] = new float[n];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i - 1][j - 1] = pow(i, 3) + sin(j) - 5;
			cout << setw(9) << a[i - 1][j - 1];
		}
		cout << endl;
	}
}
*/
// 14 завдання
/*
#include "windows.h" // підключення української мови
#include <iostream> // підключення бібліотеки для вводу і виведення данних
#include <time.h> // підключення генератору рандомних чисел
#include <math.h> // бібліотека математичних функцій
#include <iomanip>
using namespace std; // бібліотека, що дозволяє не вводити std:: кожен рядок коду
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int n;
	float max = -50, min = 50;
	cout << "Введіть к-сть стовпців матриці: "; cin >> n;
	cout << "Матриця:\n";
	int** a = new int* [10];
	for (int i = 0; i < 10; i++) a[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = rand() % 101 - 50;
			cout.width(4);
			cout << a[i][j];
			if (min > a[i][j] && a[i][j] > 0) min = a[i][j];
			if (max < a[i][j]) max = a[i][j];
		}
		cout << endl;
	}
	cout << "\nmax = " << max << " min = " << min << endl;
	cout << "\nСереднє геометричне максимуму і мінімуму = " << sqrt(max * min);
}
*/
// 15 завдання

// 16 завдання

// 17 завдання

// 18 завдання

// 19 завдання

// 20 завдання