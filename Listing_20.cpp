// Listing_20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = 1 / sqrt(x) + pow(log(abs(0.2 + sin(x))), 2) * pow(sqrt(pow(x, 2)), 1./ 3);
	cout << "r: " << r;
	return 0;
}