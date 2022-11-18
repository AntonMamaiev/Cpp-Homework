#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include <conio.h>
#include "windows.h"
using namespace std;

struct A {
    char text;
};
struct List {
    A a;
    List* next;
};

void Print(List* b) {
    List* print = b;
    print = print->next;
    while (print) {
        cout << print->a.text;
        print = print->next;
    }
}
void Init(List** begin) {
    //string s = "orem ipsum dolor sit amet, consectetur adipiscing elit, sd dq eiusmod trmptr incididunt ut labore et dolore.";
    string s;
    s[0] = NULL;
    getline(cin, s);
    *begin = new List;
    List* end = *begin;

    for (int i = 0; i < s.length(); i++) {
        end->next = new List;
        end = end->next;
        end->a.text = s[i];
        end->next = NULL;
    }
}
void Delete(List** begin, A& a) {
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
    char y = 0;    
    cout << "\n\nВведіть символ для його видалення:";
    y = getchar();
    A x = { y };
    Delete(&begin, x);
    cout << "\nПісля видалення:\n";
    Print(begin);
    cout << endl;
}
