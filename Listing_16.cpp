// Listing_16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (pow(sqrt(pow(log(x), 2)), 1./ 3) + tan(cos(x * 3.14))) * abs(log(x / 10.5));
	cout << "r: " << r;
	return 0;
}