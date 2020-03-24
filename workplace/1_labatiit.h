#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

struct fenvik 
{
private:
	int* arr;
	int* mas;
	int n;
public:
	void set_n(int x);
	void create();
	void show();
	void upd(int number_of_element,int add);
	int sum(int up);
	void del();
	int SUM(int r,int l);
};
