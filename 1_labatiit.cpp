#include "1_labatiit.h"

    void fenvik::set_n(int x)
{
	n = x;
}
    void fenvik::show()
{
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", mas[i]);
	}
	cout << endl;
	
	
}
    void fenvik::create()
{
	cout << endl;
	
	arr = new int[n];
	mas = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
		mas[i] = 0;
	}
	
	cout << endl;
}
	void fenvik::upd(int number_of_element,int add)
    {
		cout << endl; 
		
	
		number_of_element = number_of_element - 1;
	    
		mas[number_of_element] += add;
	    while (number_of_element < n)
	    {
		   arr[number_of_element] += add;
		   number_of_element = (number_of_element | (number_of_element + 1));
	    }
		cout << endl;
    }
	int fenvik::sum(int up)
    {
		
		up = up - 1;
	    int result = 0;

	    for (; up >= 0; up = (up & (up + 1)) - 1) 
		{
		   result += arr[up];
	    }
		
	    return result;
    }
	void fenvik::del()
	{
		delete[]arr;
		delete[]mas;
	}
	int fenvik::SUM(int r,int l)
    {
				
		r = r - 1;
		int resultR = 0;
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
		return resultT;
    } 
	