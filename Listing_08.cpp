// Listing_08.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (abs(log(pow(x, 3) + 1 / 3))) / (sqrt(exp(x / 3.14) + pow(sqrt(x), 1./3) + 1.4));
	cout << "r: " << r;
	return 0;
}