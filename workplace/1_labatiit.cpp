#include "1_labatiit.h"

    bool fenvik:: upd_sum_check(int x)
{
	if (x <= n && x >= 1)
	{
		return true;
	}
	else
	{
		printf("��������� ����(����� %d ���������: ",n);
		return false;
	}
}
    void fenvik::show()
{
	cout << endl;
	
		
	printf("������ ������� �� %d ���������: ",n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	cout << endl;
	printf("������ �� %d ���������: ",n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", mas[i]);
	}
	cout << endl;
	
	
}
    void fenvik::create()
{
	cout << endl;
	
	printf("������� ������ ������: ");
	scanf_s("%d", & n);
	arr = new int[n];
	mas = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
		mas[i] = 0;
	}
	
	cout << endl;
}
	void fenvik::upd()
    {
		cout << endl; 
		
	    int number_of_element, add;
	    printf("������� ����� �������� ������� ������ ��������: ");
		do
		{
			scanf_s("%d", &number_of_element);
		} while (upd_sum_check(number_of_element) != 1);
		number_of_element = number_of_element - 1;
	    printf("������� �� ������� ������ ���������/��������� �������: ");
	    scanf_s("%d", &add);
		mas[number_of_element] += add;
	    while (number_of_element < n)
	    {
		   arr[number_of_element] += add;
		   number_of_element = (number_of_element | (number_of_element + 1));
	    }
		cout << endl;
    }
	int fenvik::sum()
    {
		cout << endl;
		
		int x;
		printf("������ ������� ������ �����: ");
		do 
		{
			scanf_s("%d", &x);
		} while (upd_sum_check(x) != 1);
		int X = x;
		x = x - 1;
	    int result = 0;

	    for (; x >= 0; x = (x & (x + 1)) - 1) 
		{
		   result += arr[x];
	    }
		printf("����� �� 1-��� �� %d-��� �������� �����: %d", X, result);
		cout << endl;
		
	    return result;
    }
	void fenvik::del()
	{
		delete[]arr;
		delete[]mas;
	}
	int fenvik::SUM()
    {
		
		cout << endl;
		
		int l, r;
		printf("������ ������� ������ �����: ");
		do
		{
			scanf_s("%d", &r);
		} while (upd_sum_check(r) != 1);
		int R = r;
		r = r - 1;
		int resultR = 0;


		printf("������ ������ ������ �����: ");
		do
		{
			scanf_s("%d", &l);
		} while (upd_sum_check(l) != 1);
		int L = l;
		l = l - 2;
		int resultL = 0;

		for (; r >= 0; r = (r & (r + 1)) - 1)
		{
			resultR += arr[r];
		}
		for (; l >= 0; l = (l & (l + 1)) - 1)
		{
			resultL += arr[l];
		}
		int resultT = 0;
		resultT = resultR - resultL;
		printf("����� �� %d-��� �� %d-��� �������� �����: %d", L,R, resultT);
		
		cout << endl;
		return resultT;
    } 
	