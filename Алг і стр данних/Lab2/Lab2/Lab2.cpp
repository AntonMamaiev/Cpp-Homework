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
	int n = 0, dia = 1;
	while (dia)
	{
		cout << "\nОберіть дію: 1 - додати елемент, 2 - вивести елементи, 3 - вивести у зворотньому напрямку, 0 - завершити роботу\n";
		cin >> dia;
		switch (dia)
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