// Listing_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = pow(sqrt(pow(3.14, 2) - pow(x, 2) + exp(-1)), 1./3) + tan((x - 1) / x) + 1 / 7;
	cout << r;
	return 0;
}
