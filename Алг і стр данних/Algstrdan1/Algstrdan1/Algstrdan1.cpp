

//1 - (ж
//Задан текст, состоящий из строк, разделенных пробелом и оканчивающийся точкой.
//Написать подпрограмму поиска заданного элемента в списке. Используя эту подпрограмму 
//удалить все вхождения заданного символа из текста;
/*
#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include <conio.h>
#include "windows.h"
using namespace std;

struct A{
    char text;
};
struct List {
    A a;
    List* next;
};

void Print(List* b) {
    List* print = b;
    while (print) {
        cout << print->a.text;
        print = print->next;
    }
}
void Init(List** begin) {
    //string s = "orem ipsum dolor sit amet, consectetur adipiscing elit, sd dq eiusmod trmptr incididunt ut labore et dolore.";
    string s;
    getline(cin,s);
    *begin = new List;
    List* end = *begin;

    for (int i = 0; i < s.length(); i++) {
        end->next = new List;
        end = end->next;
        end->a.text = s[i];
        end->next = NULL;
    }
}
void Delete(List** begin, A&a) {
    List* t = *begin;
    List* t1 = t->next;
    if (t->a.text == a.text) {
        *begin = t->next;
        t->next = t1->next;
    }
    while (t1) {
        if (t1->a.text == a.text) {
            t->next = t1->next;
        }
        t = t1;
        t1 = t1->next;
    }
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    List* begin = NULL;
    begin = new List;
    cout << "Дано текст:\n";
    Init(&begin);
    Print(begin);
    char y;
    cout << "\n\nВведіть символ (англ) для його видалення:";
    y = getchar();
    A x = { y };
    Delete(&begin, x);
    cout << "\nПісля видалення:\n";
    Print(begin);
    cout << endl;
} */
// 2 
// Дана последовательность символов, оканчивающаяся точкой:
// в конец последовательности добавить все ее символы, располагая их в
// обратном порядке(например, из последовательности 1, 2, 3 получить 1, 2, 3, 2, 1).
/*
#include <iostream>
#include <windows.h>
using namespace std;

class Program {
public:
	double x;
	Program* next, * prev;
};

Program* head, * current, * tail;

void add(int n) {
	for (int i = 0; i < n; i++)
	{
		current = new(Program);
		current->next = NULL;
		cout << "x = "; cin >> current->x;
		if (head == NULL)
		{
			current->prev = NULL;
			head = current;
			tail = current;
		}
		else
		{
			current->prev = tail;
			tail->next = current;
			tail = current;
		}

	}
}


void out()
{
	if (head != NULL)
	{
		Program* t;
		t = head;
		current = t;
		cout << current->x << " ";
		while (current->next != NULL)
		{
			current = t->next;
			t = current;
			cout << current->x << " ";
		}
	}
}

void back()
{
	if (head != NULL)
	{
		Program* t;
		t = tail;
		current = t;
		cout << current->x << " ";
		while (current->prev != NULL)
		{
			current = t->prev;
			t = current;
			cout << current->x << " ";
		}
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0, reg = 1;
	while (reg)
	{
		cout << "\nОберіть дію: 1 - додати елемент, 2 - вивести елементи, 3 - вивести у зворотньому напрямку, 0 - завершити роботу\n";
		cin >> reg;
		switch (reg)
		{
		case 1:
		{
			cout << "Скільки елементів: "; cin >> n;
			add(n);
			break;
		}
		case 2:
		{
			out();
			break;
		}
		case 3:
		{
			back();
			break;
		}
		}
	}
	return 0;
}
*/



// 3
// Написать операции работы с заданной структурой данных, включив их в один модуль(файл).К основным операциям(см.таблицу 1) добавить операцию,
// показывающую содержимое структуры после выполнения какого - либо действия с ней.Эту операцию реализовать на основе базовых операций :
// операция “принадлежит ли заданный элемент ” статической очереди (вид очереди а, б, в, г);
/*
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
using namespace std;

struct s
{
	int top = 0;
	string data[20];
} stek;

void add(int n, int file)
{
	int maxsize = 20;
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
			cout << "0 - записати елементи вручну, 1 - записати елементи через файл\n";
			cin >> file;
			cout << "Скільки елементів додати (n<=20): ";
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
*/

// 4
// В заданном бинарном дереве найти первое вхождение заданного элемента и напечатать пройденные при поиске узлы дерева :
// при обратном обходе дерева;
/*
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
using namespace std;


int tabs = 0; //Для создания отступов

int f = 0, f2 = 0, f3 = 0, f4 = 0;

struct Branch {
	int Data;
	Branch* LeftBranch;
	Branch* RightBranch;
};
void Add(int aData, Branch*& aBranch) {
	if (!aBranch) {
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		if (f2 == 0)
			f = aBranch->Data;
		f2 = 1;
		return;
	}
	else {
		if (aBranch->Data > aData) {
			Add(aData, aBranch->LeftBranch);
		}
		else {
			Add(aData, aBranch->RightBranch);
		}
	}
}
void print(Branch* aBranch)
{
	if (!aBranch) return; //Если ветки не существует - выходим. Выводить нечего
	tabs += 5; //Иначе увеличим счетчик рекурсивно вызванных процедур
	//Который будет считать нам отступы для красивого вывода
	print(aBranch->RightBranch); //Выведем ветку и ее подветки слева
	for (int i = 0; i < tabs; i++) cout << " "; //Потом отступы
	cout << aBranch->Data << endl; //Данные этой ветки
	print(aBranch->LeftBranch);//И ветки, что справа
	tabs -= 5; //После уменьшим кол-во отступов
	return;
}
void pr_obh(Branch*& aBranch)
{
	if (NULL == aBranch) return; //Если дерева нет, выходим

	pr_obh(aBranch->LeftBranch); //Обошли левое поддерево
	pr_obh(aBranch->RightBranch); //Обошли правое поддерево
	cout << aBranch->Data << endl; //Посетили узел
}

void pr_obh2(Branch*& aBranch, int el)
{
	if (NULL == aBranch) return; //Если дерева нет, выходим
	pr_obh2(aBranch->LeftBranch, el); //Обошли левое поддерево
	pr_obh2(aBranch->RightBranch, el); //Обошли правое поддерево
	if (f3 == 0)
		cout << aBranch->Data << endl; //Посетили узел
	if (aBranch->Data == el) {
		f3 = 1;
	}
}
void FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int vel;
	Branch* Root = 0;
	int element, dia = 1; srand(time(NULL));
	while (dia != 0) {
		cout << "\nОберіть дію: 1 - створити нове випадкове дерево, 2 - зворотній обхід дерева, 3 - чи належить елемент до дерева, 0 - завершити роботу\n";
		cin >> dia;
		switch (dia)
		{
		case 1:
			Root = 0;
			cout << "Введіть к-сть елементів для дерева: ";
			cin >> vel; 
			cout << endl;
			for (int i = 0; i < vel; i++)
			{
				Add(rand() % 25, Root);
			}
			cout << "Виведення бінарного дерева: " << endl;
			print(Root);
			cout << endl;
			break;
		case 2:
			cout << "Зворотній обхід бінарного дерева: " << endl;
			pr_obh(Root);
			cout << endl;
			break;
		case 3:
			f3 = 0;
			cout << "Введіть елемент для пошуку: ";
			cin >> element;
			cout << "Пройдені вузли при пошуку:\n";
			pr_obh2(Root, element);
			if (f3 == 0) cout << "Серед пройдених вузлів не знайдено вказаного числа\n";
			break;
		}
	}
}*/

// 5 
// 2. В файле WORK содержатся результаты работы цеха за день. Элемент файла
// включает: шифр изделия(8 - символьный код), наименование изделия,
// количество(штук).Построить таблицу, содержащую результаты работы за день,
// считая ключом шифр изделия.Элемент таблицы имеет ту же структуру, что и
// элемент файла.Содержащаяся в файле информация с равными ключами должны
// быть помещена в таблицу один раз с общим количеством штук изделия.
// Организовать таблицу как: неупорядоченную;
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

struct cell
{
	string key = "  ";
	string name = "  ";
	int quantity = 0;

	bool isempty()
	{
		return key == "  ", name == "  ", quantity == 0;
	}

	void output()
	{
		cout << "Шифр: " << key << endl;
		cout << "Название: " << name << endl;
		cout << "Количество " << quantity << " шт." << endl;
		cout << "------------" << endl;
	}
};

int hashindex(string key, int hashLen)
{
	int sum = 0;
	for (int i = 0; i < key.length(); i++)
	{
		sum += key[i];
	}
	return sum % hashLen;
}

struct hashtable
{
	const int len = 10;
	cell* h;
	hashtable()
	{
		h = new cell[len];
	}

	void add(cell cl)
	{
		int index = hashindex(cl.key, len);
		int i;
		for (i = index; i < len && !h[i].isempty(); i++);
		if (!h[i].isempty())return;
		h[i] = cl;
	}

	void output()
	{
		for (int i = 0; i < len; i++)
			if (!h[i].isempty())
			{
				cout << "i: " << i << endl;
				h[i].output();
			}
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cell h1;
	int reg = 1;
	hashtable table1;
	ifstream fin("table.txt");
	if (!fin) cout << "error" << endl;
	while (reg != 0) {
		cout << "\nРежим: \n1. Загрузить таблицу.\n2. Вивести таблицу.\n0. Завершить работу.\n";
		cin >> reg;
		switch (reg)
		{
		case 1:
			while (fin)
			{
				fin >> h1.key >> h1.name >> h1.quantity;
				table1.add(h1);
			}
			break;
		case 2:
			cout << endl << "------------" << endl;
			table1.output();
			break;
		}
	}
	fin.close();
}

// 6
// Упорядочить таблицу, построенную в лабораторной работе No 5 вариант 2.а по
// не убыванию значений ключа методом :
// а) быстрой сортировки;



