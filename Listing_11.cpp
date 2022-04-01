// Listing_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	float x, r;
	cout << "x: ";
	cin >> x;
	r = (1 / 7 + log(sqrt(x))) * exp(sqrt(x - 2));
	cout << "r: " << r;
	return 0;
}