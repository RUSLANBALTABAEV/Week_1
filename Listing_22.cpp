// Listing_22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (log(sqrt(exp(0.1 * x) + x))) / (x + pow(sqrt(10.7), 1. / 3) + atan(x)) + 2 / 5;
	cout << "r: " << r;
	return 0;
}