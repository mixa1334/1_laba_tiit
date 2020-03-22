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
	bool upd_sum_check(int x);
	int n;
public:
	void create();
	void show();
	void upd();
	int sum();
	void del();
	int SUM();
};
