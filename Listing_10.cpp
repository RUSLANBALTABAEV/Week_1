// Listing_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (log(pow(x, 2)) + 3.14) / (exp(5 / 3)) - x * atan(x / sqrt(2.7) + 1.4);
	cout << "r: " << r;
	return 0;
}