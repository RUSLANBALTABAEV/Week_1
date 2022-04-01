// Listing_21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = 1.8 + log(abs(4 - 2 / 7 - tan(sin(5 * x / 3))));
	cout << "r: " << r;
	return 0;
}