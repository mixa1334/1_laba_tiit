#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include"1_labatiit.h"
using namespace std;



int main() 
{
	system("chcp 1251>nul");
	
	int n;
	int k;
	cout << "введите n: ";
	cin >> n;
	int* fenvik = new int[n];
	int* massiv = new int[n];


	for (int i = 0; i < n; i++)
	{
		fenvik[i] = 0;
		massiv[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "введите элемент:";
		cin >> k;
        upd(massiv, fenvik, i,k,n);
	}
	
	cout << "эелементы массива:";
	for (int i = 0; i < n; i++)
	{
		cout << massiv[i]<<" ";
	}
	cout << endl;
	cout << "эелементы дерева:";
	for (int i = 0; i < n; i++)
	{
		cout << fenvik[i]<<" ";
	}
	cout << endl << endl;
	int x;
	cout << "введите верхний предел суммы:"<<endl;
	cin >> x;
	cout << endl << endl;
	cout<<sum(x-1, fenvik);
	int y, z;
	cout << "введите нижний предел суммы: " << endl;
	cin >> y;
	cout << "введите верхний предел суммы: " << endl;
	cin >> z;
	cout << SUM(y-1,z-1,fenvik);

	

	
	

	delete[] fenvik;
	delete[] massiv;
	system("pause>nul");
	return 0;
}