#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include"1_labatiit.h"
using namespace std;
fenvik FEN;


bool oper(int x);
bool check(int x,int size);

int main() 
{
	system("chcp 1251>nul");
	int op;
	int x,number,add,up,l,r;
	printf("Введите размер дерева: ");
	scanf_s("%d", &x);
	FEN.set_n(x);
	FEN.create();
	printf("Дерево фенвика и массив состаящие из %d элементов: ", x);
	FEN.show();
	while (true)
	{
		cout << endl;
		printf("Выберите операцию:      1-изменение элемента\n\t\t\t2-Сумма от 0 до n\n\t\t\t3-Просмотр\n\t\t\t4-Сумма от x до y\n\t\t\t0-Очистить\n\t\t\t5-Выход\n");
		do
		{
			scanf_s("%d", &op);
		} while (oper(op) != 1);
		switch (op)
		{
		case 0:
			system("CLS");
			break;
		case 1:
			cout << "введите номер элемента который хотите изменить: ";
			do {
				cin >> number;
			} while (check(number,x) != 1);
			cout << "введите на скольно хотите изенить элемент: ";
			cin >> add;
			FEN.upd(number,add);
			break;
		case 2:
			cout << "Введите верхний предел суммы: ";
			do
			{
				cin >> up;
			} while (check(up,x)!=1);
			cout<<FEN.sum(up);
			break;
		case 3:
			printf("Дерево фенвика и массив состаящие из %d элементов: ", x);
			FEN.show();
			break;
		case 4:
			cout << "Введите верхний предел суммы: ";
			do {
				cin >> r;
			} while (check(r, x) != 1);
			cout << "Введите нижний предел суммы: ";
			do {
				cin >> l;
			} while (check(l, x) != 1);
			cout<<FEN.SUM(r,l);
			break;
		case 5:
			FEN.del();
			return 0;
			break;
		}
		cout << endl;
	}
	system("pause>nul");
	return 0;
}

bool check(int x,int size)
{
	if (x <= size && x > 0)
	{
		return true;
	}
	else
	{
		printf("Повторите ввод:");
		return false;
	}
}
bool oper(int x)
{
	if (x == 1 || x == 2 || x == 3 ||x==4|| x == 0 || x == 5)
	{
		return true;
	}
	else
	{
		printf("Повторите ввод: ");
		return 0;
	}
}