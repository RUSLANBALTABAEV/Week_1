// Listing_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, pi, r;
	pi = 3.14;
	cout << "x: ";
	cin >> x;
	r = sqrt(exp(2.2 * x)) - abs(sin(pi * x) / (x + 2 / 3)) + 1.7;
	cout << r;
	return 0;
}