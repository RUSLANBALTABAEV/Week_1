// Listing_09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (pow(sqrt(exp(2 / 3 - x)), 1./ 5)) / (sqrt(pow(x, 2) + pow(x, 4) + log(x - 3.4)));
	cout << "r: " << r;
	return 0;
}