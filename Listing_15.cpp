// Listing_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = sqrt(exp(abs(pow(sin(x), 2)))) + 2 * log(3 * x) - 1 / 9;
	cout << "r: " << r;
	return 0;
}