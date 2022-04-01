// Listing_24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = 1 / 3 * pow(sqrt(exp(6.3 + sqrt(x))), 1./ 7) * abs(cos(2 * x / 3) - x);
	cout << "r: " << r;
	return 0;
}