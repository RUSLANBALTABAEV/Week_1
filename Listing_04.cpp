// Listing_04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = sqrt(exp(2 * x) * sqrt(x) - (x + 1 / 3) / x) * abs(cos(2.5 * x));
	cout << "r: " << r;
	return 0;
}