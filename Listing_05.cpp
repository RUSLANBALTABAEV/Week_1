// Listing_05.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = sqrt(pow(sqrt(pow(x, 4)), 1. / 5)) + pow(sqrt(pow(x, 4 - x)), 1. / 5) + log(abs(x - 20.5));
	cout << "r: " << r;
	return 0;
}