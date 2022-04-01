// Listing_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (sqrt(1 / 5 + pow(sqrt(exp(x)), 1. / 5))) / (abs(log(pow(x, 2))) - 1.3);
	cout << "r: " << r;
	return 0;
}