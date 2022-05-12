#include <iostream>
#include <Windows.h>
#include "Rational.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rational r;
	int a, b;
	try
	{
		cin >> a;
		cin >> b;
		r = Rational(a, b);
		cout << r << endl;
	}
	catch (RationalException e)
	{
		cout << "RationalException " << e.what() << endl;
	}

	try
	{
		cin >> a;
		cin >> b;
		r = Rational(a, b);
		cout << r << endl;
	}
	catch (exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}

	try
	{
		r = Rational();
		r--;
	}
	catch (int* n)
	{
		cout << "int* " << *n << endl;
	}

	

	return 0;
}