// Listing_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (sqrt(1 + pow(x, 2)) + (abs(pow(log(x), 3))) / (1.6 + pow(x, 4))) * sin(7 * x);
	cout << "r: " << r;
	return 0;
}