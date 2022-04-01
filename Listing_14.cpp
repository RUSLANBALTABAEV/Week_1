// Listing_14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (log(sqrt(3.14 + abs(2 - x)))) / (3 - 1 / x) + pow(sqrt(pow(x, 2)), 1. / 3) * sin(1.4 * x);
	cout << "r: " << r;
	return 0;
}