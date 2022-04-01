// Listing_23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (abs(sqrt(10.5 * x))) / (pow(pow(sqrt(x), 2), 1. / 3) - 0.143) + 2 * 3.14 * x;
	cout << "r: " << r;
	return 0;
}