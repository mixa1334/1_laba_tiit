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
	printf("введите n: ");
    scanf_s("%d",&n);
	int* fenvik = new int[n];
	int* massiv = new int[n];


	for (int i = 0; i < n; i++)
	{
		fenvik[i] = 0;
		massiv[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("введите элемент: ");
		scanf_s("%d",&k);
        upd(massiv, fenvik, i,k,n);
	}
	
	printf("эелементы массива: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",massiv[i]);
	}
	
	printf("\nэелементы дерева: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",fenvik[i]);
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