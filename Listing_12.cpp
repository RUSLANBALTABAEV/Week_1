// Listing_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (pow(x, 3)) / (sqrt(3)) - exp(x) * log(abs(pow(1.37, 3) + pow(x, 3))) + 4 / 3;
	cout << "r: " << r;
	return 0;
}