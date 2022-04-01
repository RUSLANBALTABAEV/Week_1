// Listing_25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = 1.1 * exp(x) + abs(cos(sqrt(3.14 * x))) - 4 / 9;
	cout << "r: " << r;
	return 0;
}