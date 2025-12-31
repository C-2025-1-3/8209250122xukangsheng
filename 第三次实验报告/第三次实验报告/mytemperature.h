#pragma once
#include<iostream>
using namespace std;
double C_to_F(double C)
{
	double F;
	F = 32 + C * 1.8;
	cout << F << endl;
	return 0;
}
double F_to_C(double F)
{
	double C;
	C = (F - 32) / 1.8;
	cout << C << endl;
	return 0;
}