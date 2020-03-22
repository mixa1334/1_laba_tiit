#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include"1_labatiit.h"
using namespace std;
fenvik FEN;


bool oper(int x);

int main() 
{
	system("chcp 1251>nul");
	int op;
	FEN.create();
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
			FEN.upd();
			break;
		case 2:
			FEN.sum();
			break;
		case 3:
			FEN.show();
			break;
		case 4:
			FEN.SUM();
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