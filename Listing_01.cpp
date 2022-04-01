// Listing_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, e, r;
	e = 2.7;
	cout << "x: ";
	cin >> x;
	r = (abs(x * log(x) - 4 / 7) * sqrt(x)) / (pow(sqrt(pow(e, 4 * x - 1.1)), 1. / 5));
	cout << r;
	return 0;
}