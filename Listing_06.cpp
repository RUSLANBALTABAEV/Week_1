// Listing_06.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (abs(7.2 - 10 * x) / pow(sqrt(x / 9 + exp(2 * x)), 1. / 3)) * atan((4 * tan(2 * x) / (sqrt(1.1 * pow(x, 3)))));
	cout << "r: " << r;
	return 0;
}