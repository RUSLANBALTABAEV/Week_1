// Listing_18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (sin(0.5 * 3.14 * x) + pow(sqrt(x), 1. / 5)) / (sqrt(abs(cos(3.14 * x) + 1)) * exp(sqrt(x)));
	cout << "r: " << r;
	return 0;
}